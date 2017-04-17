//2017.02.01 업데이트, https://www.hackerrank.com/challenges/two-strings
//1주차 때 했었음.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int checkString(string s1, string s2){
    int num = 0;
    
    for(int i = 0; i < s1.length() ; i++ ){
        //s1 전체를 탐색할 동안 그게 s2에도 동일한 문자가 있는지 비교하기.
        if(s2.find(s1[i]) != string::npos){
            num = 1;
            break;
        }
    }
    
    return num;
}

void returnAnswer(int num){
    if(num)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, count = 0;
    vector<string> strList;
    cin >> n;
    
    for(int i=0; i < n; ++i){
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        strList.push_back(s1);
        strList.push_back(s2);
        //데이터 모두 추가.
    }
    
    //비교해서 출력하기
    for(int j = 0; j < n ; ++j){
        returnAnswer(checkString(strList[count], strList[count+1]));
        count += 2;
    }
    
    return 0;
}

