//2017.01.04 , https://www.hackerrank.com/challenges/missing-numbers

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int aSize, bSize, temp;
    map<int,int> aList, bList;
    vector<int> resultList;
    
    cin >> aSize;
    for(int i = 0 ; i < aSize ; i++){
        cin >> temp;
        aList[temp] += 1; 
    }
    
    cin >> bSize;
    for(int i = 0 ; i < bSize ; i++){
        cin >> temp;
        bList[temp] += 1;
    }
    
    map<int, int>::iterator iterMap;
    for( iterMap = aList.begin(); iterMap != aList.end() ; ++iterMap){
        if(iterMap->second != bList[iterMap->first]){
            resultList.push_back(iterMap->first);
        }
    }
    
    /*
    for(int i = 0 ; i < resultList.size() ; i++)
        cout<<resultList[i]<<" ";
    */
    
    vector<int>::iterator iterVec;
    for( iterVec = resultList.begin(); iterVec != resultList.end() ; ++iterVec)
        cout<<*iterVec<<" ";
        
        
    return 0;
}
