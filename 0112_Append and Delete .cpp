//2017.01.12 , 6주차, https://www.hackerrank.com/challenges/append-and-delete

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
    string t;
    cin >> t;
    int k;
    cin >> k;
    
    int i, point = 0, sCnt = 0, tCnt = 0;
    
    //같은 문자의 경우 빈 문자열을 포함해 지우기 때문에 +1을 지우고 다시 원 사이즈만큼 더해야하기 때문에 size()*2를 해주었다.
    if(s == t){
        cout<<"Yes"<<endl;
    }else{ 
        //서로 다른 문장일 경우,어디까지 같은지 찾아내고 얼마나 다른지랑 얼마나 추가해야하는 지를 각각 구해서 더하면 끝.
        for(i = 0 ; i < s.size() ; i++){
            if( s[i] != t[i] ){
                point = i;
                break;
            }
        }
        
        if(point == 0 && s[0] == t[i]) //s가 t의 일부인 경우
            point = s.size();

        sCnt = s.size() - point;
        tCnt = t.size() - point;
        
        if(k >= sCnt + tCnt)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    
    
        
    return 0;
}



