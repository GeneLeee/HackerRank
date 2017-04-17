// 2017.04.13 , 17주차 , https://www.hackerrank.com/challenges/weighted-uniform-string

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
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> possList;
    vector<int>::iterator vecIter;
    
    
    //초기화
    int stack = s[0]-96;
    possList.push_back(stack);
    
    for( int j = 1; j < s.size(); j++ ){
        if( s[j-1] == s[j] )
            stack += s[j] - 96;
        else
            stack = s[j] - 96;
            
        possList.push_back(stack);
    }
    
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        // your code goes here
        
        bool isTrue = false;
        
        vecIter = find(possList.begin(), possList.end(), x );
        if(vecIter != possList.end())
            isTrue = true;
        
        if( isTrue )
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
