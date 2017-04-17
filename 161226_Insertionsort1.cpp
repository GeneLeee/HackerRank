//2017.01.09 업데이트 , https://www.hackerrank.com/challenges/insertionsort1

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

void printSort(vector <int>  ar) {
    for(int i = 0 ; i < ar.size(); i++)
        cout<<ar[i]<<" "; 
}

void insertionSort(vector <int>  ar) {
    int temp = ar[ar.size()-1]; //마지막 원소값 저장.
    int size = ar.size(), i; 
    
    for(i = 1 ; i < size; i++){
        if( ar[size-1-i] > temp){
            ar[size-i] = ar[size-1-i];
        }else{
            ar[size-i] = temp;
			printSort(ar);
            break;
        }
        
        printSort(ar);
        cout<<endl;
    }
    //끝까지해도 못찾았을 경우
    if(ar[0] == ar[1]){
        ar[0] = temp;
        printSort(ar);
        cout<<endl;
     }
}
        
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}
