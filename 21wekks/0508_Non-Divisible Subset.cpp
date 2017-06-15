//2017.05.08, 21weeks, https://www.hackerrank.com/challenges/non-divisible-subset
//This is not my code. This is my friend, hyunjin's code. I can't solve this problem.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k, a;
    cin >> n >> k;
    
    vector<int> s(k);
    for(int i = 0; i < n; i++) {
        cin >> a;
        s[a%k]++;
    }
    /* k = 4 
    1 2 3 4 5 6 7 8 9 10
    s -> s[0], s[1], s[2], s[3]
    s[0] : 4, 8
    s[1] : 1, 5, 9
    s[2] : 2, 6, 10
    s[3] : 3, 7
    */
    
    // idx = (a % k) > 0, �� �� idx�� k-idx �� ���� ���ϸ� k�� ���������� ������ �� ū ��(���� ��)�� ����. 
    // s[1] > s[3], result = 3
    int result = 0;
    for(int idx = 1; idx < k/2 + k%2; idx++) 
        result += max(s[idx], s[k-idx]);
    
    // k�� ������ �������� ���(s[0])�� 2�� �̻��� ���� ������ ���� k�� ���������� ������ 1���� ����.
    // result += 1
    result += min(1, s[0]);
    
    // idx = k / 2 �� ���(s[2]) 2�� �̻��� ���� ������ ���� k�� ���������� ������ 1���� ����.
    // result += 1
    if(k%2 == 0)
        result += min(1, s[k/2]);
    
    cout << result << endl;
    return 0;
}
