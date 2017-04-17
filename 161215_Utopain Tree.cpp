//2017.02.01 ������Ʈ, https://www.hackerrank.com/challenges/utopian-tree
//1���� �� �߾���.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printGrowth(int num){
    int count = 1, temp = 1;
    bool check = true;
    
    //0�� ��� ����ó���� �̸� �ص�.
    if(num == 0){
        cout<<1<<endl;
    }else{
        while(check){
            if(count % 2 == 0) //����
                temp += 1;
            else //��
                temp *= 2;

            //1ȸ�� �ϰ� ���� count �� ����.
            count += 1;

            if(count == num+1)
                break;
        }
        cout<<temp<<endl;
    }
}

int main(){
    vector<int> numList;
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        numList.push_back(n);
    }
    
    for(int i = 0 ; i < t ; i++){
        //�޼ҵ� ���� ��������
       printGrowth(numList[i]);
    }
    //for���� ī��Ʈ��ŭ ������, �� ������ ���� ���Ϳ� �߰��ؼ� ������, while���� ���� ���� ī��Ʈ��ŭ ������ �� ����� �ɵ�.
    return 0;
}