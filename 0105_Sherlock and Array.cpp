//2017.01.09 , https://www.hackerrank.com/challenges/sherlock-and-array

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int _case;
    vector<int> ar;
    bool cor = false, firstCheck = true; //correct
    
    cin >> _case;
    for(int i = 0 ; i < _case ; i++){
        int _size;
        cin >> _size;
        for(int j = 0 ; j < _size ; j++){
            int _temp;
            cin >> _temp;
            ar.push_back(_temp);
        }
        
        //여기서 구해야함.
        int sum = 0;
        vector<int>::iterator iter;
        for(iter = ar.begin() ; iter != ar.end(); iter++)
            sum += *iter;
        
        int left = 0, right = 0;
        
        for(int i = 0 ; i < ar.size(); i++){
            if(i)
                left += ar[i-1];
            
            right = sum - left - ar[i];
            
            if(left == right){
                cor = true;
                break;
            }
        }
        //case 종료, 결과 출력 및 초기화
        if(cor)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        cor = false; firstCheck = true; 
        ar.clear();
    }

    return 0;
}