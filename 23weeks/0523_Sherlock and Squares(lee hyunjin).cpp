//2017.05.23, 23weeks , https://www.hackerrank.com/challenges/sherlock-and-squares

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
     cin >> t;
    for(int i = 0; i <t; i++) {
        int A, B;
        cin >> A >> B;
        ///*
        int cnt = 0;
        for(int j = A; j <= B; j++) {
            int squaresInt = sqrt(j);
            bool isSquaresInt = (squaresInt * squaresInt) == j;
            
            if(isSquaresInt) {
                cnt++;
                j += squaresInt * 2;
                // [1] 2 3 [4] 5 6 7 8 [9] 10 11 12 13 14 15 [16] 17 18 19 20 21 22 23 24 [25]
                //     <2>    <   4   >    <       6        >     <           8          >
                //     1*2       2*2              3*2                        4*2
            }
        }
        cout << cnt << endl;    
        //*/     
        
        // 수학적 접근
        /*
        int sqCnt = floor(sqrt(B)) - ceil(sqrt(A));
        cout << sqCnt + 1 << endl;
        */
    }

    return 0;
}
