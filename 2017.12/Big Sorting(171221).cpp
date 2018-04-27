//Lee HyunSik
//2017.12.21
//https://www.hackerrank.com/challenges/big-sorting/problem

#include <bits/stdc++.h>

using namespace std;

bool myCompare(string a, string b){
    bool result = false;
    if( a.length() < b.length())
        result = true;
    else if ( a.length() == b.length()){
        if( a.compare(b) < 0 )
            result = true;
    }
    
    return result;
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    sort(unsorted.begin(), unsorted.end(), myCompare);
    
    for(int i = 0 ; i < unsorted.size(); i++)
        cout<< unsorted[i] << endl;
    
    return 0;
}
