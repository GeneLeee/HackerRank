//Lee HyunSik
//2017.12.21
//https://www.hackerrank.com/challenges/the-power-sum/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int totnum(int X,int N,int num){
    if(pow(num,N)<X)
        return totnum(X,N,num+1)+totnum(X-pow(num,N),N,num+1);
    else if(pow(num,N)==X)
        return 1;
    else
        return 0;
}

int main() {
    int X,N;
    cin>>X>>N;
    cout<<totnum(X,N,1);
    return 0;
}