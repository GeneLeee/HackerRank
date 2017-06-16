//2017.04.24, 19weeks, https://www.hackerrank.com/challenges/magic-square-forming

#include <bits/stdc++.h>

#define SQUARE_KIND 8
#define SQUARE_SIZE 3

using namespace std;



int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    
    //  Print the minimum cost of converting 's' into a magic square
    int squareArr[SQUARE_KIND][SQUARE_SIZE][SQUARE_SIZE] = {
        { {4,9,2}, {3,5,7}, {8,1,6} } ,
        { {2,9,4}, {7,5,3}, {6,1,8} } ,
        { {8,1,6}, {3,5,7}, {4,9,2} } ,
        { {6,1,8}, {7,5,3}, {2,9,4} } ,
        { {6,7,2}, {1,5,9}, {8,3,4} } ,
        { {2,7,6}, {9,5,1}, {4,3,8} } ,
        { {8,3,4}, {1,5,9}, {6,7,2} } ,
        { {4,3,8}, {9,5,1}, {2,7,6} }
    };
    int minEle = 82, nowEle = 0; //minimum element, now element
    
    for(int i = 0 ; i < SQUARE_KIND ; i++){
        for(int j = 0 ; j < SQUARE_SIZE; j++){
            for(int k = 0 ; k < SQUARE_SIZE; k++){
                int temp = squareArr[i][j][k] - s[j][k];
                if(temp < 0)
                    temp *= -1;
                nowEle += temp;
            }
        }
        //cout<<i<<"¹øÂ°, now : "<<nowEle<<", min : "<<minEle<<endl;
        if( minEle > nowEle)
            minEle = nowEle;
        
        nowEle = 0;
    }
    
    cout<< minEle <<endl;
    return 0;
}
