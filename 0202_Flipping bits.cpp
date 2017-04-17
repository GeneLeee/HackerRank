// 2017.02.01 , 8주차, https://www.hackerrank.com/challenges/flipping-bits
// 일부러 모든 과정을 생략하지 않고 직설적으로 하나하나 표현함.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define BITS 32

void printDecimal(string bin){
    unsigned int result = 0, size = bin.size();
    if(bin[31] == '1') //맨 끝의 수는 2진수를 곱하는 것이 아닌 단순 1을 더하기 때문에 예외적으로 먼저 처리함. 때문에 실계산에는 size()-1만큼 진행해야함.
        result += 1;
    
    for(int i = 2 ; i <= size; i++){
        int n = size - i; //32-2 = 30, ... 
        if(bin[n] == '1')
            result += pow(2, (double)(i-1));
    }
    
    cout<<result<<endl;
}

string switchBinary(long num){
    string finalResult, beforeFlipping, result, temp; //계산한 값을 반전하기 전에는 temp에 담았다가 정답을 출력할때 result로 반전시켜서 return해줌.
    long quot = num, rem; //quotient, remainder

    do{
        //나머지를 먼저 구해야함.
        rem = quot % 2;
        temp += to_string(rem);
        quot = quot / 2;
    }while(quot > 0);
    
    //거꾸로 구한 몫을 뒤에서부터 앞으로
    for(int i = 0; i < temp.size() ; i++){
        result += temp[temp.size()-i-1];
    }
    
    //앞에 0의 공백을 추가
    for(int i = 0 ; i < BITS ; i++){
        if(BITS-i > result.size())
            beforeFlipping += "0";
        else
            beforeFlipping += result[result.size() - (BITS-i)];
    }
    
    //0과 1을 반전
    for(int i = 0 ; i < beforeFlipping.size(); i++){
        if(beforeFlipping[i] == '0')
            finalResult += "1";
        else
            finalResult += "0";
    }
    
    return finalResult;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int size;
    cin >> size;
    
    vector<long> list(size); //최대 받을 수 있는 수는 2의 32제곱이기 때문에 long형을 사용해줘야 함.
    vector<string> binList(size);
    
    for(int i = 0 ; i < size; i++)
        cin >> list[i];
    
    for(int i = 0 ; i < size; i++)
        binList[i] = switchBinary(list[i]);
    
    //10진수로 변환 작업. 뒤에서부터 작업을 진행. 즉, 1을 나타내는 맨 뒤는 31, 그 앞은 30, //
    for(int k = 0 ; k < size; k++)
        printDecimal(binList[k]);
    
    return 0;
}