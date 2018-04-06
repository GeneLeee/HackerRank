//Lee HyunSik
//2017.11.23
//https://www.hackerrank.com/contests/w35/challenges/lucky-purchase/problem

#include <bits/stdc++.h>

using namespace std;

bool isSameFourSeven(int num){
    bool result = false;
    string str = to_string(num);
    int sevCnt = 0, fourCnt = 0;
    
    for(int i = 0 ; i < str.size(); i++){
        if( str[i] == '7')
            ++sevCnt;
        else if( str[i] == '4')
            ++fourCnt;
        else
            return false;
    }
    
    if(sevCnt != 0 && sevCnt == fourCnt)
        result = true;
    
    return result;
}


int main() {
    int n;
    long min = 100000000;
    cin >> n;
    map<int, string> list;
    for(int a0 = 0; a0 < n; a0++){
        string name;
        int value;
        cin >> name >> value;
        list[value] = name;
    }
    
    map<int, string>::iterator seek = list.begin();
    map<int, string>::iterator end = list.end();
    
    for( ; seek != end ; seek++ ){
        if( isSameFourSeven(seek -> first) && seek -> first < min )
            min = seek -> first;
    }
    if( min != 100000000)
        cout << list[min] << endl;
    else
        cout << "-1" << endl;
    
    return 0;
}
