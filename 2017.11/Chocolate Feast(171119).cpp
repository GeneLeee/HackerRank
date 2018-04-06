//Lee HyunSik
//2017.11.19
//https://www.hackerrank.com/challenges/chocolate-feast/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        
        int bought = n /c;
        int quot = bought , rem = 0; //quotient, reminder
        
        while( quot + rem >= m){
            quot += rem;
            
            int quotTemp = quot;
            quot = quot / m;
            rem = quotTemp % m;
            
            bought += quot;
        }
        
        cout << bought << endl;
        
    }
    return 0;
}
