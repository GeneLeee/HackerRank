//Lee HyunSik
//2017.12.21
//https://www.hackerrank.com/challenges/angry-children/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

long max(vector<int> &arr){
    int maxNum = -1;
    
    for(int i = 0 ; i < arr.size(); i++){
        if( maxNum < arr[i] )
            maxNum = arr[i];
    }
        
    return maxNum;
}

long min(vector<int> &arr){
    int minNum = 1000000001;
    
    for(int i = 0 ; i < arr.size(); i++){
        if( minNum > arr[i] )
            minNum = arr[i];
    }
        
    return minNum;
}

int main() {
    int N, K, unfairness;
    cin >> N >> K;
    vector<int> list(N);
    for (int i=0; i<N; i++)
        cin >> list[i];
    
    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    sort(list.begin(), list.end());
    
    int minGap = 1000000000, gap = -1, minIdx = -1;
    for(int i = 0 ; i < N-(K-1) ; i++)
    {
        gap = list[i+(K-1)] - list[i];
        if( minGap > gap)
        {
            minGap = gap;
            minIdx = i;
        }
    }
    
    vector<int> minList;
    for(int i = minIdx ; i < minIdx + K ; i++)
    {
        minList.push_back(list[i]);
    }
    
    unfairness = max(minList) - min(minList);
    
    cout << unfairness << "\n";
    return 0;
}
