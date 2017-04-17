//2017.01.09 , https://www.hackerrank.com/challenges/designer-pdf-viewer

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


int main(){
    int n = 26; //¾ËÆÄºªÀº 26°³
    vector<int> h(n);
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    
    int leng = word.size(), highest = 0;
    for(int i = 0 ; i < leng ; i++){
        int temp = word[i] - 97;
        if(highest < h[temp] ){
            highest = h[temp];
        }
    }
    
    cout<<highest * leng <<endl;
    
    return 0;
}
