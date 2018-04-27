//Lee HyunSik
//2017.12.01
//https://www.hackerrank.com/contests/101hack46/challenges/marcs-cakewalk

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> cList(n);
    
    
    for(int c = 0 ; c < n ; c++)
        cin >> cList[c];
    
    //Selection Sort
    for(int i = 0 ; i < n-1 ; i++ ){
        for(int j = i+1 ; j < n ; j++){
            //swap function
            if( cList[i] < cList[j] ){
                int temp = cList[i];
                cList[i] = cList[j];
                cList[j] = temp;
            }
        }
    }
    
    long stack = 0;
    for(int i = 0 ; i < n ; i++ ){
        stack = stack + (cList[i] * pow(2 , i));
    }
    
    cout << stack << endl;
    
    return 0;
}
