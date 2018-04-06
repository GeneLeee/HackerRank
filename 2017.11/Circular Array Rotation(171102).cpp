//Lee HyunSik
//2017.11.02 
//https://www.hackerrank.com/challenges/circular-array-rotation/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<long> rotateArray(vector<long> arr, long k){
    int size = arr.size();
    vector<long> newArr(size);
    
    if(k > size)
        k = k % size;
    long idx;
    for(long i = 0 ; i < size ; i++){
        idx = i+k;
        if(idx >= size)
            idx -= size;
        newArr[idx] = arr[i];
    }
    
    return newArr;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n,k,q;
    cin >> n >> k >> q;
    
    vector<long> arr(n), indexArr(q);
    for(long i = 0 ; i < n; i++)
        cin >> arr[i];
    
    for(long j = 0 ; j < q; j++)
        cin >> indexArr[j];
    
    arr = rotateArray(arr,k);
    
    for(long i = 0 ; i < indexArr.size(); i++)
        cout<<arr[indexArr[i]]<<endl;
    
    return 0;
}
