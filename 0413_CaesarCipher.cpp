// 2017.04.13 , 17���� , https://www.hackerrank.com/challenges/caesar-cipher-1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//�빮�� 'Z'�� �ҹ��� 'z'�� �Ѿ�� 'a','A'���� �ٽ� �����ϵ��� ��������.

string ifZOver(string s, int enc){
    string result = "";
    
    
    return result;
}


int main(){
    int n;
    cin >> n; //������ ũ��
    string s;
    cin >> s; //��ȯ�ؾ� �� ����
    int k;
    cin >> k; //��ȯ�ؾ� �� ũ��
    
    string encryptedStr = "";
    
    //���ĺ��� ��쿡�� ��ȯ�ؾ���.
    for(int i = 0 ; i < n ; i++){
        if( ('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')){
            //�빮�� 'Z'�� �ҹ��� 'z'�� �Ѿ�� 'a','A'���� �ٽ� �����ϵ��� ��������.
            if( ('a' <= s[i] && s[i] <= 'z') && s[i] + k > 'z' ){
                encryptedStr += 'a' + ((k - (int)( '{' - s[i] )) % 26) ;
            }else if( ('A' <= s[i] && s[i] <= 'Z') && s[i] + k > 'Z' ){
                encryptedStr += 'A' + ((k - (int)( '[' - s[i] )) % 26) ;
            }else
                encryptedStr += (char)( s[i] + k );
        }   
        else
            encryptedStr += s[i];
    }
    
    cout<< encryptedStr <<endl;
    
    return 0;
}
