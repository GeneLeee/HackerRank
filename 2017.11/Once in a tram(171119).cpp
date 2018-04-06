//Lee HyunSik
//2017.11.19
//https://www.hackerrank.com/contests/w34/challenges/once-in-a-tram/problem

#include <bits/stdc++.h>

using namespace std;

string onceInATram(int x) {
    // Complete this function
    string result = "", temp = "";
    int luckyTemp = x / 1000, toBeLucky = 1 + (x % 1000); //must do 1
    int luckyNumber = (luckyTemp / 100) + ((luckyTemp % 100) / 10) + ((luckyTemp % 100) % 10);
    bool flag = true;
    
    
    while( flag ){
        int isLucky = (toBeLucky / 100) + ((toBeLucky % 100) / 10) + ((toBeLucky % 100) % 10);
        
        if( isLucky == luckyNumber)
            flag = false;
        else
            ++toBeLucky;
        
        if(toBeLucky > 999){
            ++luckyTemp;
            luckyNumber = (luckyTemp / 100) + ((luckyTemp % 100) / 10) + ((luckyTemp % 100) % 10);
            toBeLucky = 0;
        }
    }
    
    if(toBeLucky / 10 == 0)
        temp += "00";
    else if(toBeLucky / 100 == 0)
        temp += "0";
    
    result = to_string(luckyTemp);
    temp += to_string(toBeLucky);
    
    result += temp;
    
    return result;
}

int main() {
    int x;
    cin >> x;
    string result = onceInATram(x);
    cout << result << endl;
    return 0;
}
