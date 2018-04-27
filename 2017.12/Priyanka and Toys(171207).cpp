//Lee HyunSik
//2017.12.07
//https://www.hackerrank.com/challenges/priyanka-and-toys/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    vector<int> w(n);
    for(int i = 0 ; i < n; i++)
        cin >> w[i];
    
    sort(w.begin(), w.end());
    
    int unit = 0, i = 0;
    for( ; i < w.size(); ){
        int  p = i; //p => point
        while( w[i] <= w[p] && w[p] <= w[i]+4 )
            ++p;
        
        i = p;
        ++unit;
    }
    
    cout << unit << endl;
    
    return 0;
}
