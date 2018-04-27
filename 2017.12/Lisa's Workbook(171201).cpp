//Lee HyunSik
//2017.12.01
//https://www.hackerrank.com/challenges/lisa-workbook/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isSamePage(int page, int sNum, int k){
    cout << "now page : " << page <<" , start : "<<sNum << " , k : "<< k << endl;
    for(int i = sNum ; i < i+k ;i++){
        if( i == page)
            return true;
    }
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    int specialNum = 0, page = 1, remProblem, startNum, endLine = 0;
    
    for(int i = 0 ; i < n ; i++ ){
        remProblem = arr[i];
        startNum = 1;
        
        while( 1 ){
            if(remProblem > k)
                endLine = startNum + k;
            else
                endLine = startNum + remProblem;
            
            if( startNum <= page && page < endLine)
                ++specialNum;
            
            if( remProblem > k){
                remProblem -= k;
                startNum += k;
                ++page;
            }else{
                ++page;
                break;
            }
            
        }
    }
               
    cout << specialNum << endl;
    
    return 0;
}
