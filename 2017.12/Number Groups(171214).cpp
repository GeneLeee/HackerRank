//Lee HyunSik
//2017.12.14
//https://www.hackerrank.com/contests/101hack52/challenges/number-groups

#include <bits/stdc++.h>

using namespace std;

unsigned long sumOfGroup(unsigned long k) {
    // Return the sum of the elements of the k'th group.
    return k*k*k;
}

int main() {
    int k;
    cin >> k;
    long answer = sumOfGroup(k);
    cout << answer << endl;
    return 0;
}
