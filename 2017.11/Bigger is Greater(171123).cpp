//Lee HyunSik
//2017.11.23
//여기에 주소

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int caseNum;
    cin >> caseNum;

    string str;
    
    for( int c = 0 ;c < caseNum ; c++){
        cin >> str;
        
        string origin = str;
            
        int pivot, i, j;
        for( i = str.size()-1 ; i > 0 ; i-- ){
            pivot = str[i-1];
            if( pivot < (int)str[i]){
                break;
            }
        }

        for( j = str.size()-1 ; j > 0 ; j-- ){
            if( (int)str[j] > pivot ){
                char temp = (char)pivot;
                str[i-1] = str[j];
                str[j] = pivot;
                break;
            }
        }

        if( str == origin )
            cout << "no answer" << endl;
        else{
            int mid = ((str.size() - i) / 2) + i, rCnt = 0; //for reverse count
            
            for(int k = i ; k < mid ; k++){
                char tempC = str[k];
                str[k] = str[str.size() - 1 - rCnt];
                str[str.size() - 1 - rCnt] = tempC;

                ++rCnt;
            }
            
            cout << str << endl;
        }
    }
    return 0;

}