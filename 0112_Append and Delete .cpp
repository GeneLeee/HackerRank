//2017.01.12 , 6����, https://www.hackerrank.com/challenges/append-and-delete

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
    
    //���� ������ ��� �� ���ڿ��� ������ ����� ������ +1�� ����� �ٽ� �� �����ŭ ���ؾ��ϱ� ������ size()*2�� ���־���.
    if(s == t){
        cout<<"Yes"<<endl;
    }else{ 
        //���� �ٸ� ������ ���,������ ������ ã�Ƴ��� �󸶳� �ٸ����� �󸶳� �߰��ؾ��ϴ� ���� ���� ���ؼ� ���ϸ� ��.
        for(i = 0 ; i < s.size() ; i++){
            if( s[i] != t[i] ){
                point = i;
                break;
            }
        }
        
        if(point == 0 && s[0] == t[i]) //s�� t�� �Ϻ��� ���
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



