//2017.01.09 ������Ʈ, https://www.hackerrank.com/challenges/beautiful-binary-string

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
#include <string>

using namespace std;

//���ڿ��� �Ѱܹް� �ش� ���ڿ��� üŷ�ؼ� ������� count�� �Ѱ��� �� �ִ� �Լ��� ����� �� ��.

int checkZeroOneZero(int size, string getStr){
    int count = 0;
    
    for(int i = 0 ; i < size;){
        if (getStr[i] == '0' & getStr[i+1] == '1' & getStr[i+2] == '0'){
            count += 1;
            i = i+3;
        }else{
            i += 1;
        }
    }
    
    return count;
}

int main(){
    int n;
    cin >> n; //n�� ������
    string B;
    cin >> B; //B�� �Էµ� ����.
    
    cout<<checkZeroOneZero(n,B);
    
    
    return 0;
}
