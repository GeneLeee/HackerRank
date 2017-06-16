//2017.04.17, 18weeks, https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem
//I can't solve this problem 100%... because of timeout..

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
    int n, temp;
    cin >> n;
    map<int, int> scores;
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        if( !scores[temp] )
            scores[temp];
    }
    
    int m;
    cin >> m;
    vector<int> alice(m), noOverlapList;
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
    }
    // your code goes here
    
    map<int, int>::iterator iter;
    for( iter = scores.begin() ; iter != scores.end(); iter++){
        noOverlapList.push_back( (*iter).first );
    }
    sort(noOverlapList.begin(), noOverlapList.end());
    
    for(int j = 0 ; j < m ; j++){
        int i, aliceScore = alice[j], new_n = noOverlapList.size(), count = 1;
        if( aliceScore <= noOverlapList[ new_n /2 ] ){
            //above half
            for( i = 0 ; i <= new_n / 2 ; i++){
                if( aliceScore < noOverlapList[i] )
                    break;
            }
            cout<< (noOverlapList.size() + 1) - i <<endl;
        }else{
            //over half
            for( i = new_n-1 ; i >= new_n / 2 ; i--){
                if( aliceScore >= noOverlapList[i] )
                    break;
                else
                    ++count;
            }
            cout<< count <<endl;
        }
    }
    
    return 0;
}

