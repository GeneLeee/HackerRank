//2017.02.01 업데이트, https://www.hackerrank.com/challenges/utopian-tree
//1주차 때 했었음.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printGrowth(int num){
    int count = 1, temp = 1;
    bool check = true;
    
    //0일 경우 예외처리를 미리 해둠.
    if(num == 0){
        cout<<1<<endl;
    }else{
        while(check){
            if(count % 2 == 0) //여름
                temp += 1;
            else //봄
                temp *= 2;

            //1회전 하고 나서 count 값 증가.
            count += 1;

            if(count == num+1)
                break;
        }
        cout<<temp<<endl;
    }
}

int main(){
    vector<int> numList;
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        numList.push_back(n);
    }
    
    for(int i = 0 ; i < t ; i++){
        //메소드 만들어서 돌리던지
       printGrowth(numList[i]);
    }
    //for문을 카운트만큼 돌리고, 그 기존의 값은 벡터에 추가해서 돌리고, while문을 따로 만들어서 카운트만큼 돌리는 거 만들면 될듯.
    return 0;
}