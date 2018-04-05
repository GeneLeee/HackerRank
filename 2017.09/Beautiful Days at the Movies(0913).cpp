//Lee HyunSik
//0913
//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long reversed(long x){
    long result;
    string arr = to_string(x), newArr ="";
    int size = arr.size();
    
    for(int i = 0 ; i < size; i++){
        char temp = arr[size-1-i];
        
        if( newArr == "" ){
            if( temp != '0' )
                newArr += temp;
        }
        else
            newArr += temp;
            
    }
    result = atoi(newArr.c_str());
    
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long i =0 , j = 0, k=0 ,countResult = 0;
    cin >> i >> j >> k;
    
    for(long l = i; l <= j ; l++){
        long temp = l - reversed(l);
        
        if(temp < 0)
            temp *= -1;
        
        if( temp % k == 0 ){
            ++countResult;
        }
    }
    
    cout<< countResult << endl;
    
    return 0;
}
