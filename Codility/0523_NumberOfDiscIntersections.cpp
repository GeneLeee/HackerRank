//2017.05.23 , 23weeks , https://codility.com/programmers/lessons/6-sorting/number_of_disc_intersections/
//correct answer page : https://codility.com/demo/results/training6XCJHE-U82/

// you can use includes, for example:
 #include <algorithm>
 #include <vector>
 #include <iostream>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int result = 0, size = A.size();
    
    vector<long> beginPoint;
    vector<long> endPoint;
    
    for(long i = 0 ; i < size ; i++){
        beginPoint.push_back(i - A[i]);
        endPoint.push_back(i + A[i]);
    }
    
    sort(beginPoint.begin(), beginPoint.end());
    sort(endPoint.begin(), endPoint.end());
    
    for(int i = 0 ; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(beginPoint[j] <= endPoint[i]){
                ++result;
                if(result > 10000000){
                    return -1;
                }
                
            }else{
                break;
            }
        }
    }
    
    return result;
}