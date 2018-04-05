//Lee HyunSik
//2017.10.19
//https://www.hackerrank.com/challenges/permutation-equation/problem

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int size;
    map<int,int> arr;
    cin >> size;
    
    for(int i = 1 ; i <= size; i++){
        cin >> arr[i];
    }
    
    map<int,int>::iterator seek = arr.begin();
    map<int,int>::iterator end = arr.end();
    bool flag = false;
    
    int temp;
    for(int j = 1 ; j <= size; j++){
        for( ; seek != end ; seek++){
            if( j == seek->second ){
                temp = seek->first; //3
                seek = arr.begin();
                for( ; seek != end ; seek++){
                    if( temp == seek->second ){
                        cout<< seek->first <<endl;
                        flag = true;
                        break;
                    }
                }
                if( flag )
                    break;
            }
        }
        //init;
        seek = arr.begin();
        flag = false;
    }
    
    
    return 0;
}
