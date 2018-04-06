//Lee HyunSik
//2017.11.14
//https://www.hackerrank.com/challenges/equality-in-a-array/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, biggest = 0, max = 0;
    map<int,int> numMap;
    cin >> size;
    
    int temp;
    for(int i = 0; i < size; i++){
        cin >> temp;-
        ++numMap[temp];
    }
    
    map<int,int>::iterator seek = numMap.begin();
    map<int,int>::iterator end = numMap.end();
    
    for( ; seek != end; seek++){
        if( max < seek -> second){
            max = seek->second;
        }
    }
    
    int result = size - max;
    
    cout << result << endl;
    
    return 0;
}
