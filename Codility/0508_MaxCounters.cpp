//2017.05.08, 21weeks, https://codility.com/programmers/lessons/4-counting_elements/max_counters/
//correct answer page : https://codility.com/demo/results/trainingPHAAEH-98H/
//I can't solve this problem 100%...


// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

void maxCounter(vector<int>& arr, int max){
    vector<int>::iterator seek = arr.begin();
    vector<int>::iterator end = arr.end();
    
    for( ; seek != end ; seek++ ){
        *seek = max;
    }
}

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    /*
    cout<<"N : "<<N<<", A.size() : "<<A.size()<<endl;
    for(unsigned i = 0 ; i < A.size(); i++ ) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    */
    
    vector<int> resultArr(N);
    map<int, int> maxList;
    int max = 0;
    
    for( unsigned i = 0 ; i < A.size(); i++ ){
        if( A[i] == (N+1) ){
            maxCounter(resultArr, max);
        }else if( 1 <= A[i] && A[i] <= N ){
            //역여깅여기에 젱제약 축추가 
            ++resultArr[A[i]-1];
        }
        
        //max_element를 대체할, 최대값을 기억하는 방법을 찾아낼 것.
        if( A[i] != (N+1) && resultArr[A[i]-1] > max ){
            max = resultArr[A[i]-1];
        }
        
        /*
        //testing
        for( unsigned k = 0 ; k < resultArr.size(); k++){
            cout<<"max : "<<max  << ", testing : " << resultArr[k] << " ";
        }
        cout<<endl;
        */
        
    }
    
    return resultArr;
}