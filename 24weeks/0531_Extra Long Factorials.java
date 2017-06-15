//2017.05.31, 24weeks, https://www.hackerrank.com/challenges/extra-long-factorials
//This case, I used Java , because of Big Integer

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v(1, 1);
    int carry = 0;
    
    for(int i = 2; i <= n; i++) {
        for(unsigned int j = 0; j < v.size(); j++) {
            v[j] = v[j]*i + carry;
            carry = v[j] / 10;
            v[j] = v[j] % 10;
        }
        while(carry) {
            v.push_back(carry % 10);
            carry /= 10;
        }
    }
  
    vector<int>::reverse_iterator riter(v.rbegin());
    
    for (; riter != v.rend() ; ++riter)
        cout << *riter;
    cout << endl;
        
    return 0;
}
