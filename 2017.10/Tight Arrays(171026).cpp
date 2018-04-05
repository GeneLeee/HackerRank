//Lee HyunSik
//2017.10.26
//https://www.hackerrank.com/contests/101hack48/challenges/tight-arrays

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << abs(a-b) + abs(b-c) + 1 << endl;    

    return 0;
}