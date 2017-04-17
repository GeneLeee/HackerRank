//2017.01.09 , https://www.hackerrank.com/challenges/reduced-string

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string newString(string oldStr){
    string newStr = "";
    int count = 0;
    
    for(int i = 0 ; i < oldStr.size(); i++){
        if(oldStr[i] != NULL){
            newStr[count] += oldStr[i];
            count += 1;
        }
    }
    
    return newStr;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str = "";
    cin>>str;
    
    for(int i = 0 ; i < str.size(); i++){
        if(str[i] == str[i+1]){
            str.erase(i,2);
            i = -1;
        }
    }
    if(str != "")
        cout<<str<<endl;
    else
        cout<<"Empty String"<<endl;
    
    return 0;
}