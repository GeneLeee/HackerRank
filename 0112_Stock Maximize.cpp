//2017.01.12 , 6주차, https://www.hackerrank.com/challenges/stockmax

//이건 문과적...


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc; //total Case
    cin >> tc;
    for(int j = 0 ; j < tc; j++){
        int n;
        unsigned temp;
        vector<unsigned> arr;
        
        cin >> n;
        for(int i = 0 ; i < n ; i++){
            cin >> temp;
            arr.push_back(temp);
        }

        //여기부터
        bool biggerCheck = false;
        int share = 0;
        unsigned spend = 0, profit = 0;
        //share는 구입한 주식의 양으로 ++를 사용. spend는 팔기 전 구입한 주식의 비용 즉, 날마다 구입한 주식의 가격을 증가시켜야함.
        for(int i = 0 ; i < arr.size(); i++){
            for(int k = i+1 ; k < arr.size(); k++){
                //뒤에 나(i)보다 더 큰 값이 있는가?
                if(arr[i] <= arr[k]){
                    //있다면 구매
                    ++share;
                    spend += arr[i];
                    biggerCheck = true;
                    break;
                }
            } //for문 k를 다 돌렸는데도 큰 값이 없다? 즉, 내가 가장 큰 값이다.
            if(!biggerCheck){
                //주식이 있다면 판매해야함.
                if(share > 0){
                    long temp = (long)(arr[i] * share) - spend; //현재 보유 주식량 * 현재 주가 - 지금까지 구입한 비용
                    profit += temp;
                    //판매하고 났으면 초기화작업.
                    
                    share = 0;
                    spend = 0;
                }
            }
            biggerCheck = false;
        } //for문 i
        //결과 출력
        cout<<profit<<endl;
    }
    return 0;
}



