//2017.05.08, 21weeks, https://www.hackerrank.com/challenges/larrys-array

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void listRotate(vector<int>& arr, int begin, int count){
    for(int i = 0 ; i < count ; i++){
        int temp = arr[begin];
        arr[begin] = arr[begin+1];
        arr[begin+1] = arr[begin+2];
        arr[begin+2] = temp;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc;
    cin >> tc;
    for(int k = 0 ; k < tc; k++){
        bool result = true;
        int n, temp;
        cin >> n;
        vector<int> arr(n), sortedArr(n);
        for(int i = 0 ; i < n; i++){
            cin >> arr[i];
            sortedArr[i] = arr[i];
        }
        
        sort(sortedArr.begin(), sortedArr.end());
        
        /*
        for(int i = 0 ; i < n; i++)
            cout << arr[i] << " ";
        cout<< endl;
        */
        
        for(int i = 0 ; i < arr.size()-2 ; i++){
            for(int j = 0 ; j < arr.size()-2 ; j++){ //do like bubblesort
                if( arr[j+1] < arr[j] && arr[j+1] < arr[j+2]){
                    listRotate(arr, j, 1);
                }else if( arr[j+2] < arr[j] && arr[j+2] < arr[j+1] ){
                    listRotate(arr, j, 2);
                }
            }
            
            /*
            for(int k = 0 ; k < arr.size(); k++)
                cout<<arr[k]<<" ";
            cout<<endl;
            */
        }
        
        /*
        for(int i = 0 ; i < arr.size(); i++){
            if( arr[i] != sortedArr[i] ){
                result = false;
                break;
            }
        }
        */
        
        if( arr != sortedArr ){
            result = false;
        }
        
        if( result ) //is_sorted
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}