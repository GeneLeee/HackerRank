//2017.04.17, 18weeks, https://www.hackerrank.com/challenges/closest-numbers
//Timeout..

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int listSize;
    cin >> listSize;
    vector<long> list(listSize), printList;
    
    for(int i = 0 ; i < listSize ; i++)
        cin >> list[i];
    
    int min = 0; //minimum init
    
    //must do sub
    for(int i = 0 ; i < list.size() ; i++){
        for(int j = 0 ; j < list.size(); j++){

            if( i != j ){//same number case don't need.
                long temp = list[i] - list[j];
                
                if( min <= 0 || temp < min && temp > 0){
                    min = temp;
                    printList.clear();
                    printList.push_back(list[i]);
                    printList.push_back(list[j]);
                }else if( temp == min ){
                    printList.push_back(list[i]);
                    printList.push_back(list[j]);
                }
            }
        }    
    }
    
    sort(printList.begin(), printList.end());
    
    for(int i = 0; i < printList.size(); i++)
        cout<<printList[i]<<" ";
    
    return 0;
}
