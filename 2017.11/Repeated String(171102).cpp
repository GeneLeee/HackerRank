//Lee HyunSik
//2017.11.02
//https://www.hackerrank.com/challenges/repeated-string/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    string s, resultStr = "";
    unsigned long n, result = 0;
    cin >> s;
    cin >> n;
    
     unsigned long lastCount = 0, totalCount = 0, lastCalculatedNum = n % s.size();
    
    for( int i = 0 ; i < s.size() ; i++ ){
        if(s[i] == 'a'){
            if( i < lastCalculatedNum )
                ++lastCount;
            ++totalCount;
        }
    }
    if( totalCount == 0 )
        cout<< 0 << endl;
    else
        cout << totalCount * (n / s.size()) + lastCount << endl;
    
    return 0;
}
