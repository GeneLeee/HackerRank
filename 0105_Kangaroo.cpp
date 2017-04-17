//2017.01.09 , https://www.hackerrank.com/challenges/kangaroo

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

#define MAX_SIZE 10000

using namespace std;


int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    ///
    
    bool check = true;
    
    if(x1 == x2 && v1 == v2){ //애초에 같을 경우
        cout<<"YES"<<endl;
        return 0;
    }
    
    if( x1 < x2 && v1 < v2){ //애초에 따라잡을 수 없는 경우
        cout<<"NO"<<endl; 
        return 0;
    }else if(x1 > x2 && v1 > v2){
        cout<<"NO"<<endl; 
        return 0;
    }
    
    for(int i = 0 ; i < MAX_SIZE ; i++){
        x1 = x1+v1;
        x2 = x2+v2;
        if(x1 == x2){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    
    cout<<"NO"<<endl;
    
    return 0;
}
