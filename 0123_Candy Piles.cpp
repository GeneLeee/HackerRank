//2017.01.23 7~8���� , https://www.hackerrank.com/contests/hourrank-16/challenges/pile-of-candies
//�����ؼ� ���͵� ���� �ٽ� Ǯ�

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
    
    //�ּ� ���� 2�� �̻����� �˻�.
    for(int i = 0 ; i < list.size() ; i++){
        if(list[i] == min){ 
            if(minIndex == -1){
                minIndex = i; //������ min�� �� ��° �ε������� ã�Ƴ�.
            }else
                minCheck = true;
        }
    }
    
    list[minIndex] = list[minIndex] * 2;
    sort(list.begin(), list.end());
    
    
    if(minCheck) //�ߺ��Ǵ� ���� �ִٸ�
        cout<<list[0]<<" "<<list.size()<<endl;
    else
        cout<<list[0]<<" "<<1<<endl;
        
    
    ///////////////////

    
    return 0;
}