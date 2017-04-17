//2017.01.09 업데이트 , https://www.hackerrank.com/challenges/funny-string

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string makeRevers(string originStr){
    string newStr = "";
    int size = originStr.size();
    
    for(int i = 0 ; i < size ; ++i){
        newStr += originStr[size-1-i];
    }
    
    return newStr;
}

int checkAbsolute(int num){
    if(num >= 0)
        return num;
    else 
        return -num;
}

string checkFunny(string originStr,string revStr){
    for(int i = 1 ; i < originStr.size(); i++){
        if(checkAbsolute(originStr[i]-originStr[i-1]) != checkAbsolute(revStr[i]-revStr[i-1]))
            return "Not Funny";
    }
    
    return "Funny";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<string> strList;
    vector<string> revstrList;
    int n;
    string s;
    
    cin>>n;
    
    for(int i = 0 ; i < n ; ++i){
        cin>>s;
        strList.push_back(s);
    }
    
    for(int i = 0 ; i < strList.size(); i++)
        revstrList.push_back(makeRevers(strList[i]));
    
    for(int i = 0 ; i < strList.size(); i++)
        cout<<checkFunny(strList[i], revstrList[i])<<endl;
    
    return 0;
}
