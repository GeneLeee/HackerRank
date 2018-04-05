//Lee HyunSik
//2017.10.19
//https://www.hackerrank.com/contests/hourrank-23/challenges/halloween-sale/problem

#include <bits/stdc++.h>

using namespace std;

int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int totalSpend = 0, buyCount = 0, nowPrice = 0;
    if( p > s )
        return buyCount;
    
    totalSpend += p;
    nowPrice = p;
    ++buyCount;
    
    while( totalSpend < s ){
        if(nowPrice - d > m)
            nowPrice -= d;
        else
            nowPrice = m;
        
        totalSpend += nowPrice;
        ++buyCount;
    }
    
    if(totalSpend > s)
        --buyCount;
    
    return buyCount;
}

int main() {
    int p;
    int d;
    int m;
    int s;
    cin >> p >> d >> m >> s;
    int answer = howManyGames(p, d, m, s);
    cout << answer << endl;
    return 0;
}
