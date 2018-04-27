//Lee HyunSik
//2017.12.14
//https://www.hackerrank.com/challenges/quicksort1/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> doQuicksort(vector<int> arr, int p){
    int equal; 
    vector<int> left, right;
    for(int i = 0 ; i < arr.size(); i++){
        if( arr[i] == p ){
            equal = arr[i];
        }else if( arr[i] < p){
            left.push_back(arr[i]);
        }else{
            right.push_back(arr[i]);
        }
    }
    
    for(int i = 0 ; i < left.size(); i++)
        cout<< left[i] << " ";
    cout<< equal <<" ";
    for(int i = 0 ; i < right.size(); i++)
        cout<< right[i]<<" ";
    cout<<endl;
    
    return arr;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int tc = 0 ; tc < n ; tc++)
        cin >> arr[tc];
    
    doQuicksort(arr, arr[0]);
    
    return 0;
}
