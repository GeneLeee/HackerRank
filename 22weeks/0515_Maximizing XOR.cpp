//2017.05.15, 22weeks , https://www.hackerrank.com/challenges/maximizing-xor/submissions/code/44723384

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string convertDecToBin(int num){
    string result = "", temp = "";
    int quo = num,rem = 0; //quotient, reminder
    
    do {
        rem = quo % 2;
        quo = quo / 2;
        temp += to_string(rem);
    }while( quo > 0 );
    
    for(int i = temp.size()-1; i >= 0 ; i--){
        result += temp[i];
    }
    
    return result;
}

int xorCalculate(string s1, string s2){
    //비교하는 두 수의 2진수 길이는 항상 같은가 ??
    int result = 0;
    string temp = "";
    
    //xor은 비교하는 두 수가 같으면 0, 다르면 1.
    for(int i = 0 ; i < s1.size(); i++){
        if(s1[i] == s2[i])
            temp += "0";
        else
            temp += "1";
    }
    
    for(int i = 0 ; i < temp.size(); i++){
        if(temp[i] != '0'){
            result += pow(2, (temp.size()-i-1));
        }
    }
    
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int L,R, highest = 0;
    cin >> L >> R;
    
    for(int i  = L ; i <= R ; i++){
        for(int j = L ; j <= R ; j++){
            string s1 = convertDecToBin(i), s2 = convertDecToBin(j), emer = ""; //emergency
            
            //사이즈가 다를경우, 앞에 자리에 0을 채우도록 한다.
            if(s1.size() != s2.size()){
                int biggerSize = 0;
                if(s1.size() > s2.size()){
                    biggerSize = s1.size() - s2.size();
                    emer = s2;
                    s2 = "";
                    for(int k = 0 ; k < biggerSize ; k++)
                        s2 += "0";
                    s2 += emer;
                }
                else{
                    biggerSize = s2.size() - s1.size();
                    emer = s1;
                    s1 = "";
                    for(int k = 0 ; k < biggerSize ; k++)
                        s1 += "0";
                    s1 += emer;
                }
            }
            
            int temp = xorCalculate( s1, s2 );
            //cout<<"i : "<<i<<", j : "<<j<<", temp : "<<temp<<", high : "<<highest<<endl;
            //cout<<"i ,j "<<s1<<", "<<j<<"// i : "<<i<<", j : "<<j<<", temp : "<<temp<<", high : "<<highest<<endl;
            //cout<<i<<"("<<s1<<"),"<<j<<"("<<s2<<") : "<<temp<<endl;
            if( highest < temp)
                highest = temp;
        }
    }
    
    cout<< highest << endl;
   
    return 0;
}
