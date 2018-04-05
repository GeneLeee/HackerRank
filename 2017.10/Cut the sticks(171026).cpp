//Lee HyunSik
//2017.10.26
//https://www.hackerrank.com/challenges/cut-the-sticks/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> transVector(vector<int> arr){
    vector<int> newArr;
        
    for(int i = 0 ; i < arr.size(); i++){
        newArr.push_back(arr[i]);
    }
    
    return newArr;
}

int findMinNum(vector<int> arr){
    int min = arr[0];
    for(int i = 0 ; i < arr.size(); i++)
        if(arr[i] < min)
            min = arr[i];
    
    return min;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n), newArr;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    //first
    cout<<arr.size()<<endl;
    
    int min;
    while( true ){
        //find min
        min = findMinNum(arr);
        
        for(int i = 0 ; i < arr.size(); i++){
            if( arr[i] - min > 0)
                newArr.push_back( arr[i] - min );
        }
        if(newArr.size() == 0)
            break;
        
        cout<< newArr.size() <<endl;
        
        arr.clear();
        arr = transVector(newArr);
        newArr.clear();
    }
    
    
    return 0;
}
