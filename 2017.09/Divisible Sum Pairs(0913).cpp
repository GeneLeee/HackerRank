//0913 Lee Hyunsik
//https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, k, count = 0;
    cin >> size >> k;
    vector<int> arr(size);
    for(int i = 0 ; i < size ; i++)
        cin >> arr[i];
    
    for(int i = 0 ; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            if( (arr[i] + arr[j]) % k == 0 ){
                ++count;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
