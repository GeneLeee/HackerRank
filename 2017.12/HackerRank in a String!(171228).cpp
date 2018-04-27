//Lee HyunSik
//2017.12.28
//https://www.hackerrank.com/challenges/hackerrank-in-a-string/problem

#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s) {
    // Complete this function
    string result = "YES";
    
    //hackerrank -> 10
    vector<char> strList = {
        'h','a','c','k','e','r','r','a','n','k'};
    vector<int> idxList; //h     ereia     mstac    k   e  r r  a n k 
    idxList.push_back(s.find(strList[0]));
    int j = 1, nowPos = 0; //j - > strList,  i -> idxList
    
    for( int i = 0 ; i < strList.size()-1 ; i++){
        if( idxList[i] >= 0){
            nowPos += idxList[i] + 1;
            idxList.push_back(s.substr(nowPos, s.size()).find(strList[j]));
            ++j;
        }else{
            result = "NO";
            break;
        }
    }
    
    return result;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = hackerrankInString(s);
        cout << result << endl;
    }
    return 0;
}
