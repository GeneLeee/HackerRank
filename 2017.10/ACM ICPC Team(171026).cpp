//Lee HyunSik
//2017.10.26
//https://www.hackerrank.com/challenges/acm-icpc-team/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m; 
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    
    vector<int> mixedArr;
    int maxCount = 0, count, maxMixedCount = 0;
    
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = i+1 ; j < n ; j++){
            count = 0; //init
            for(int k = 0; k < m ; k++){
                if(topic[i][k] == '1' || topic[j][k] == '1'){
                    ++count;
                }
            }
            if( count > maxCount)
                maxCount = count;
            mixedArr.push_back(count);
        }
    }
    
    for(int i = 0 ; i < mixedArr.size(); i++)
        if(mixedArr[i] == maxCount)
            ++maxMixedCount;
    
    cout<< maxCount << endl << maxMixedCount << endl;
    
    return 0;
}
