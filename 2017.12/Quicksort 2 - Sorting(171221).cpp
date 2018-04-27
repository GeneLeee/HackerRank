//Lee HyunSik
//2017.12.21
//https://www.hackerrank.com/challenges/quicksort2/problem

#include <bits/stdc++.h>
using namespace std;

void printSort(vector<int> &arr){
    for(int i = 0 ; i < arr.size(); i++)
        cout<<arr[i]<<" ";
}

void quickSort(vector <int> &arr) {
   // Complete this function
    vector<int> left, right;
    int p = arr[0];

    //cout << " * pivot : " << p << " , ";
    for(int i = 0 ; i < arr.size(); i++){
        if( arr[i] > p){
            right.push_back(arr[i]);
        }else if(arr[i] < p) {
            left.push_back(arr[i]);
        }
    }
    if(left.size() > 1)
        quickSort(left);
    if(right.size() > 1)
        quickSort(right);
    
    
    arr.clear();
    for(int i = 0 ; i < left.size(); i++)
        arr.push_back(left[i]);
    arr.push_back(p);
    for(int i = 0 ; i < right.size(); i++)
        arr.push_back(right[i]);
    
    printSort(left);
    cout << p << " ";
    printSort(right);
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }
    
    quickSort(arr);

    return 0;
}
