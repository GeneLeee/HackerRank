//2017.01.23 7~8주차 , https://www.hackerrank.com/contests/hourrank-16/challenges/pile-of-candies
//실패해서 스터디 이후 다시 풀어봄

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
    int n,min= 0, minIndex = -1;
    bool minCheck = false;

    cin >> n;
    vector<int> list(n);
    for(int i = 0; i < n; i++){
        cin >> list[i];
        if( list[i] < min || min == 0) 
            min = list[i];
    }
    
    //최소 값이 2개 이상인지 검사.
    for(int i = 0 ; i < list.size() ; i++){
        if(list[i] == min){ 
            if(minIndex == -1){
                minIndex = i; //최초의 min이 몇 번째 인덱스인지 찾아냄.
            }else
                minCheck = true;
        }
    }
    
    list[minIndex] = list[minIndex] * 2;
    sort(list.begin(), list.end());
    
    
    if(minCheck) //중복되는 값이 있다면
        cout<<list[0]<<" "<<list.size()<<endl;
    else
        cout<<list[0]<<" "<<1<<endl;
        
    
    ///////////////////

    
    return 0;
}