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
        if(ar[i] < ar[i-1]){ //�˻� ����
            int temp = ar[i];
            //for���� ������ temp�� �� Ŭ��쿡 �ش� �ε����� ���� �ְ� break;
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
        } //else�� ��� �˻��� �ʿ䰡 ����
        
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
