//2017.01.09 , https://www.hackerrank.com/challenges/insertionsort2

#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

void insertionSort(int size, int *  ar) {

    for(int i = 1 ; i < size ; i++){
        if(ar[i] < ar[i-1]){ //검색 시작
            int temp = ar[i];
            //for문을 돌려서 temp가 더 클경우에 해당 인덱스에 값을 넣고 break;
            for(int j = i-1 ; j > -1 ; j--){
                if(ar[j] > temp){
                    ar[j+1] = ar[j];
                }else{
                    ar[j+1] = temp;
                    break;
                }
            }
            if(ar[0] == ar[1]){
                ar[0] = temp;
            }
        } //else일 경우 검색할 필요가 없음
        
        for(int k = 0 ; k < size ; k++)
            cout<<ar[k]<<" ";
        cout<<endl;
        
    }
}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}
