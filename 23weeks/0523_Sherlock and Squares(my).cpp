//2017.05.23, 23weeks , https://www.hackerrank.com/challenges/sherlock-and-squares

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<unsigned long> arr;
    unsigned long num = 1;
    bool flag = true;
    while( flag ){
        unsigned long temp = num * num;
        arr.push_back(temp);
        ++num;
        
        if(temp >= 1000000000)
            flag = false;
    }
    
    int tc;
    cin >> tc;
    for(int k = 0 ; k < tc; k++){
        float num1 , num2 , count = 0;
        cin >> num1 >> num2;
        
        int i ,j;
        for( i = 0 ; i < arr.size(); i++){
            if( num1 <= arr[i] && arr[i] <= num2 ){
                ++count;
            }
        }
        
        cout<< count << endl;
    }
    return 0;
}
