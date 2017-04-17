// 2017.04.13 , 17주차 , https://www.hackerrank.com/challenges/marcs-cakewalk

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    // your code goes here
    
    //역순정렬
    sort( calories.begin(), calories.end(), std::greater<int>() );
    
    long total = 0;
    for(int i = 0 ; i < calories.size(); i++ ){
        total = total + (long)( calories[i] * pow(2,i) );
    }
    cout<<total<<endl;
    
    return 0;
}
