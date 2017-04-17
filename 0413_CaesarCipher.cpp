// 2017.04.13 , 17주차 , https://www.hackerrank.com/challenges/caesar-cipher-1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//대문자 'Z'던 소문자 'z'던 넘어가면 'a','A'부터 다시 시작하도록 만들어야함.

string ifZOver(string s, int enc){
    string result = "";
    
    
    return result;
}


int main(){
    int n;
    cin >> n; //문자의 크기
    string s;
    cin >> s; //변환해야 할 문자
    int k;
    cin >> k; //변환해야 할 크기
    
    string encryptedStr = "";
    
    //알파벳일 경우에만 변환해야함.
    for(int i = 0 ; i < n ; i++){
        if( ('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')){
            //대문자 'Z'던 소문자 'z'던 넘어가면 'a','A'부터 다시 시작하도록 만들어야함.
            if( ('a' <= s[i] && s[i] <= 'z') && s[i] + k > 'z' ){
                encryptedStr += 'a' + ((k - (int)( '{' - s[i] )) % 26) ;
            }else if( ('A' <= s[i] && s[i] <= 'Z') && s[i] + k > 'Z' ){
                encryptedStr += 'A' + ((k - (int)( '[' - s[i] )) % 26) ;
            }else
                encryptedStr += (char)( s[i] + k );
        }   
        else
            encryptedStr += s[i];
    }
    
    cout<< encryptedStr <<endl;
    
    return 0;
}
