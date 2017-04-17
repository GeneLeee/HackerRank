// 2017.02.01 , 8����, https://www.hackerrank.com/challenges/flipping-bits
// �Ϻη� ��� ������ �������� �ʰ� ���������� �ϳ��ϳ� ǥ����.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define BITS 32

void printDecimal(string bin){
    unsigned int result = 0, size = bin.size();
    if(bin[31] == '1') //�� ���� ���� 2������ ���ϴ� ���� �ƴ� �ܼ� 1�� ���ϱ� ������ ���������� ���� ó����. ������ �ǰ�꿡�� size()-1��ŭ �����ؾ���.
        result += 1;
    
    for(int i = 2 ; i <= size; i++){
        int n = size - i; //32-2 = 30, ... 
        if(bin[n] == '1')
            result += pow(2, (double)(i-1));
    }
    
    cout<<result<<endl;
}

string switchBinary(long num){
    string finalResult, beforeFlipping, result, temp; //����� ���� �����ϱ� ������ temp�� ��Ҵٰ� ������ ����Ҷ� result�� �������Ѽ� return����.
    long quot = num, rem; //quotient, remainder

    do{
        //�������� ���� ���ؾ���.
        rem = quot % 2;
        temp += to_string(rem);
        quot = quot / 2;
    }while(quot > 0);
    
    //�Ųٷ� ���� ���� �ڿ������� ������
    for(int i = 0; i < temp.size() ; i++){
        result += temp[temp.size()-i-1];
    }
    
    //�տ� 0�� ������ �߰�
    for(int i = 0 ; i < BITS ; i++){
        if(BITS-i > result.size())
            beforeFlipping += "0";
        else
            beforeFlipping += result[result.size() - (BITS-i)];
    }
    
    //0�� 1�� ����
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
    
    vector<long> list(size); //�ִ� ���� �� �ִ� ���� 2�� 32�����̱� ������ long���� �������� ��.
    vector<string> binList(size);
    
    for(int i = 0 ; i < size; i++)
        cin >> list[i];
    
    for(int i = 0 ; i < size; i++)
        binList[i] = switchBinary(list[i]);
    
    //10������ ��ȯ �۾�. �ڿ������� �۾��� ����. ��, 1�� ��Ÿ���� �� �ڴ� 31, �� ���� 30, //
    for(int k = 0 ; k < size; k++)
        printDecimal(binList[k]);
    
    return 0;
}