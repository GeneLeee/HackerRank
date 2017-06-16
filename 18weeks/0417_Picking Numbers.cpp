//2017.04.17, 18weeks, https://www.hackerrank.com/challenges/picking-numbers/problem

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

int main(){
    int n;
    cin >> n;
    vector<int> noOverlapList; //no Overlap List
    vector<int>::iterator vecIter;
    map<int, int> orgList; //orgin vector changed by map.
    
    for(int a_i = 0;a_i < n;a_i++){
        int temp;
        cin >> temp;
        ++orgList[temp];
        
        vecIter = find(noOverlapList.begin(), noOverlapList.end(), temp);
        if( vecIter == noOverlapList.end() )
            noOverlapList.push_back(temp);
    }
    
    int sec = 0, largest = 0; //second;
    
    sort(noOverlapList.begin(), noOverlapList.end());
    
    for( int i = 0 ; i < noOverlapList.size(); i++){
        if(noOverlapList[i] + 1 == noOverlapList[i+1]){
            sec = noOverlapList[i+1];
            if( largest < orgList[sec-1] + orgList[sec] )
                largest = orgList[sec-1] + orgList[sec];
        }
    }
    
    //if one number is bigger than two numbers?
    map<int, int>::iterator mapIter;
    for( mapIter = orgList.begin(); mapIter != orgList.end(); mapIter++ ){
        if( (*mapIter).second > largest ){
            largest = (*mapIter).second;
        }
    }
    
    cout<< largest <<endl;
    
    return 0;
}
