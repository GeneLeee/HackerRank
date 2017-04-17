//2017.01.23 7~8ÁÖÂ÷ , https://www.hackerrank.com/contests/hourrank-16/challenges/leonardo-and-lucky-numbers

/*
    switch( num ){
        case 1: case 2: case 3: case 5: case 6: case 9:
        case 10: case 13: case 17: result = "No"; break;
        default: result = "Yes";
    }

*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

string checkLucky(long num){
    string result = "";
    
    if( num % 4 == 0 )
        result = "Yes";
    else if( num % 4 == 3 && num >= 7 )
        result = "Yes";
    else if( num % 4 == 2 && num >= 14 )
        result = "Yes";
    else if( num % 4 == 1 && num >= 21 )
        result = "Yes";
    else
        result = "No";

    return result;
}

int main(){
    int q; 
    vector<long> list;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long temp;
        cin >> temp;
        list.push_back(temp);
    }
    
    for(int i = 0 ; i < list.size(); i++){
        cout<<checkLucky(list[i])<<endl;
    }
    
    return 0;
}
