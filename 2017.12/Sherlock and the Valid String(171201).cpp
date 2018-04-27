//Lee HyunSik
//2017.12.01
//https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

#include <bits/stdc++.h>

using namespace std;

string isValid(string s){
    // Complete this function
    map<char, int> sArr;
    for( int i = 0 ; i < s.size() ; i++ ){
        ++sArr[s[i]];
    }
    vector<int> sizeArr(s.size());
    
    map<char, int>::iterator iter = sArr.begin();;
    
    for( ; iter != sArr.end(); iter++ ){
        ++sizeArr[iter->second];
        //cout << iter -> first <<" : " <<iter -> second << endl;
    }
    
    int max = 0, maxNum = 0;
    for(int i = 0 ; i < sizeArr.size(); i++){
        if( max < sizeArr[i] ){
            max = sizeArr[i];
            maxNum = i;
        }
    }
    
    iter = sArr.begin();
    int deleted = 0;
    for( ; iter != sArr.end(); iter++){
        if( iter->second != maxNum ){
            if( iter->second == 1 || iter->second -1 == maxNum || iter->second +1 == maxNum )
                ++deleted;
            else
                return "NO";
        }
        
        if( deleted >= 2)
            return "NO";
    }
    
    
    return "YES";
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}
