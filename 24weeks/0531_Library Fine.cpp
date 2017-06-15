//2017.05.31, 24weeks, https://www.hackerrank.com/challenges/library-fine

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int result = 0;
        
    int ld, lm, ly; //late
    cin >> ld >> lm >> ly;
    int rd, rm, ry; //return
    cin >> rd >> rm >> ry; 
    
    if( ly > ry ){
        result = 10000;
    }else if( lm > rm && ly == ry ){
        result = 500 * ( lm - rm);
    }else if( ld > rd && lm == rm && ly == ry ){
        result = 15 * ( ld - rd);
    }
    
    cout << result;
    
    return 0;
}
