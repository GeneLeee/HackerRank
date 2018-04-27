//Lee HyunSik
//2017.12.07
//https://www.hackerrank.com/challenges/insertionsort1/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(vector<int> arr){
    for(int k = 0 ; k < arr.size(); k++)
        cout<< arr[k] <<" ";
    cout<< endl;
}

vector<int> doInsertionSort(int start, vector<int> arr){
    int ele = arr[start];
    for(int i = start-1; i >= -1 ; i--){ 
        if( i == -1 ){
            arr[0] = ele;
            break;
        }
        if( ele > arr[i] ){
            arr[i+1] = ele;
            break;
        }else{
            arr[i+1] = arr[i];
        }
        
        //print after swap
        printArray(arr);
    }
    printArray(arr);
    
    return arr;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0 ; i < size ; i++)
        cin >> arr[i];
    
    for(int i = 0 ; i < size-1 ; i++){
        if(arr[i] > arr[i+1])
            arr = doInsertionSort(i+1, arr);
    }
    
    return 0;
}

