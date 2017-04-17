//2017.01.12 , 6����, https://www.hackerrank.com/challenges/stockmax

//�̰� ������...


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tc; //total Case
    cin >> tc;
    for(int j = 0 ; j < tc; j++){
        int n;
        unsigned temp;
        vector<unsigned> arr;
        
        cin >> n;
        for(int i = 0 ; i < n ; i++){
            cin >> temp;
            arr.push_back(temp);
        }

        //�������
        bool biggerCheck = false;
        int share = 0;
        unsigned spend = 0, profit = 0;
        //share�� ������ �ֽ��� ������ ++�� ���. spend�� �ȱ� �� ������ �ֽ��� ��� ��, ������ ������ �ֽ��� ������ �������Ѿ���.
        for(int i = 0 ; i < arr.size(); i++){
            for(int k = i+1 ; k < arr.size(); k++){
                //�ڿ� ��(i)���� �� ū ���� �ִ°�?
                if(arr[i] <= arr[k]){
                    //�ִٸ� ����
                    ++share;
                    spend += arr[i];
                    biggerCheck = true;
                    break;
                }
            } //for�� k�� �� ���ȴµ��� ū ���� ����? ��, ���� ���� ū ���̴�.
            if(!biggerCheck){
                //�ֽ��� �ִٸ� �Ǹ��ؾ���.
                if(share > 0){
                    long temp = (long)(arr[i] * share) - spend; //���� ���� �ֽķ� * ���� �ְ� - ���ݱ��� ������ ���
                    profit += temp;
                    //�Ǹ��ϰ� ������ �ʱ�ȭ�۾�.
                    
                    share = 0;
                    spend = 0;
                }
            }
            biggerCheck = false;
        } //for�� i
        //��� ���
        cout<<profit<<endl;
    }
    return 0;
}



