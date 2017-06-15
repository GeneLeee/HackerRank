//2017.05.01, 20weeks, https://codility.com/programmers/lessons/3-time_complexity/perm_missing_elem/
//cor page : https://codility.com/demo/results/trainingAVD5UM-XSE/

// you can use includes, for example:
 #include <algorithm>
 #include <vector>
 #include <map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int result = 0, n = A.size();
    map<int, bool> checkList;
    
    //init
    for(unsigned int i = 1 ; i <= n+1; i++){
        checkList[i] = false;
    }
    
    for(unsigned int i = 0 ; i < n; i++){
        checkList[ A[i] ] = true;
    }
    
    map<int, bool>::iterator seek = checkList.begin();
    map<int, bool>::iterator end = checkList.end();
    
    for( ; seek != end ; seek++){
        if( !(seek->second) ){
            result = seek->first;
        }
    }
    
    
    return result;
}