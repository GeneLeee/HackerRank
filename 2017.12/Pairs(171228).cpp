//Lee HyunSik
//2017.12.28
//https://www.hackerrank.com/challenges/pairs/problem

#include <bits/stdc++.h>

using namespace std;

int pairs(int k, vector<int>& arr) {
    // Complete this function
    int result = 0;
    map<long,int> numList;
    for(int i = 0 ; i < arr.size(); i++){
        ++numList[arr[i]];
    }
    
    map<long,int>::iterator seek = numList.begin();
    map<long,int>::iterator end = numList.end();
    
    for( ; seek != end ; seek++){
        if( numList[seek->first - k] > 0)
            ++result;
    }
    
    return result;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = pairs(k, arr);
    cout << result << endl;
    return 0;
}
