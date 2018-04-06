//Lee HyunSik
//2017.11.02
//https://www.hackerrank.com/contests/101hack45/challenges/the-chosen-one/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    int count;
    
    for(long long i = 2 ; i < arr[arr.size()-1]; i++){
        count = 0;
        for(long j = 0; j < arr.size(); j++){
            if( arr[j] % i != 0)
                ++count;
            
            if(count >= 2)
                break;
        }
        if(count == 1){
            cout<< i << endl;
            return 0;
        }
    }
    
    return 0;
}