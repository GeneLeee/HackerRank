//Lee HyunSik
//2017.10.26
//https://www.hackerrank.com/challenges/palindrome-index/problem

#include <bits/stdc++.h>

using namespace std;


int palindromeIndex(string s){
    int start = 0;
    int end = s.size() -1;
    while(start < end)
    {
        if(s[start] != s[end])
        {
            if(s[start+1] == s[end] && s[start+2] == s[end-1])
                return start;
            else
                return end;
        }
        start++;
        end--;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        int result = palindromeIndex(s);
        cout << result << endl;
    }
    return 0;
}

