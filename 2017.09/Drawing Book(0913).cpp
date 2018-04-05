//0913 Lee Hyunsik
//https://www.hackerrank.com/challenges/drawing-book

#include <bits/stdc++.h>

using namespace std;

int leftCounting(int goal){
    int result = 0, page = 1;
    bool flag = true;
    while( flag ){
        if( page == goal || goal == page - 1 ){
            flag = false;
        }else{
            ++result;
            page += 2;
        }
    }
    
    return result;
}

int rightCounting(int goal, int last){
    int result = 0, page = last;
    bool flag = true;
    while( flag ){
        if( page % 2 == 0){
            if( page == goal || (page + 1) == goal){
                flag = false;
            }else{
                page -= 2;
                ++result;
            }
        }else if( page % 2 != 0){
            if( page == goal || (page - 1) == goal){
                flag = false;
            }else{
                page -= 2;
                ++result;
            }
        }
    }
    
    return result;
}

int solve(int totalPage, int goalPage){
    // Complete this function
    int rightResult = rightCounting(goalPage, totalPage);
    int leftResult = leftCounting(goalPage);
    return (rightResult > leftResult) ? leftResult : rightResult;
}

int main() {
    int toalPage;
    cin >> toalPage;
    int goalPage;
    cin >> goalPage;
    int result = solve(toalPage, goalPage);
    cout << result << endl;
    return 0;
}