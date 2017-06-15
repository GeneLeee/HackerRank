//2017.05.01, 20weeks, https://www.hackerrank.com/challenges/strange-code

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long getNum, rem = 3; 
    cin >> getNum;
    
    while( getNum > rem){
        getNum = getNum - rem;
        rem *= 2;
    }
    
    cout<< rem - getNum + 1 << endl;
    
    return 0;
}
