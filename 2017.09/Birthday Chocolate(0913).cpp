//0913 Lee Hyunsik
//https://www.hackerrank.com/challenges/the-birthday-bar/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int m,d,size,result = 0;
    cin >> size;
    vector<int> arr(size);
    
    for(int i = 0 ; i < size ; i++)
        cin >> arr[i];
    cin >> d >> m ;
    
    for(int i = 0 ; i < arr.size(); i++){
        int sum = arr[i];
        for(int j = i+1; j < i + m ; j++){
            sum += arr[j];
        }
        
        if( sum == d )
            ++result;
    }
    
    cout << result << endl;
    
    return 0;
}

