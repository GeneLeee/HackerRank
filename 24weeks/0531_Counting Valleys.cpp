//2017.05.31, 24weeks, https://www.hackerrank.com/challenges/counting-valleys

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string load = "";
    
    int tc, sl = 0, result = 0; //sea level, highest see level
    cin >> tc;
    vector<char> arr(tc);
    for(int i = 0 ; i < tc; i++)
        cin >> arr[i];
    
    for(int i = 0 ; i < tc; i++){
        if(arr[i] == 'U'){
            ++sl;
            if(sl == 0)
                ++result;
        }else
            --sl;
    }
    
    cout<<result << endl;

    return 0;
}
