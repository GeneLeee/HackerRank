// 2017.02.09 , 9����, https://www.hackerrank.com/challenges/gem-stones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isString(string s, char c){
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == c){
            return true;
        }
    }
    
    return false;
}

string findSameString(string s1, string s2){
    string result;
    
    for(int i = 0 ; i < s1.size(); i++){
        for(int j = 0 ; j < s2.size(); j++){
            if(s1[i] == s2[j]){
                 //���ٸ� �� ���ڰ� ���ԵǾ� �ִ���?
                if(!isString(result, s1[i]))
                    result += s1[i];
            }
        } 
    }
    
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<string> arr(n);
    int count = 1;
    
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    
    if( n == 1){ //Ȥ�� 1���� ���, �����ŭ�� ������ ��.
        cout<<arr[0].size()<<endl;
        return 0;
    }
    
    string result = arr[0];
    
    while( count < arr.size()){
        result = findSameString(result, arr[count]);
        ++count;
    }
    
    cout<<result.size()<<endl;
    
    return 0;
}
