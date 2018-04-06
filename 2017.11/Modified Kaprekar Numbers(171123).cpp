//Lee HyunSik
//2017.11.23
//https://www.hackerrank.com/challenges/kaprekar-numbers/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isKaprekar(long num){
    long left = 0, right = 0, sq = num * num;//square
    string strNum = to_string(sq), temp = "";
    
    
    for(int i =  0 ; i < strNum.size()/2 ; i++ ){
        temp += strNum[i];
    }
    left = atoi(temp.c_str());
    temp = "";
    
    for(int j = strNum.size() /2 ; j < strNum.size(); j++){
        temp += strNum[j];
    }
    right = atoi(temp.c_str());
    
    if( (left+right) == num )
        return true;
    else
        return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int min, max;
    cin >> min >> max;
    vector<long> arr;
    
    for(long i = min ; i <= max; i++)
        if( isKaprekar(i) ){
            cout << i << " ";
            arr.push_back(i);
        }
    
    if( arr.size() == 0)
        cout << "INVALID RANGE" << endl;
    
    return 0;
}
