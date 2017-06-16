//2017.04.24, 19weeks, https://codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/
//cor page : https://codility.com/demo/results/trainingTSHKQC-WQP/

// you can use includes, for example:
#include <algorithm>
#include <vector>
#include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &list) {
    // write your code in C++14 (g++ 6.2.0)
    int result = 0;
    map<int, int> checkList;
    
    for(unsigned int i = 0 ; i < list.size(); i++){
        ++checkList[ list[i] ];
    }
    
    map<int, int>::iterator seek = checkList.begin();
    map<int, int>::iterator end = checkList.end();
    
    for( ; seek != end ; ++seek){
        if( (*seek).second % 2 == 1 ){
            result = (*seek).first;
        }
    }
    
    return result;
}