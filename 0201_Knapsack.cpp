// 2017.02.01 , 8����, https://www.hackerrank.com/challenges/unbounded-knapsack

//�߰��߰� ����ó���� ���� �� ������ ���α׷��� �߰��� �ߴ� ��ų �� ������ �߰��� �ߴܽ��� �ִ��� ��и� ������ �����س��� ���ؼ���.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getOtherCaseMax(vector<int>& list, int goal){
    vector<int> matrix, tempMatrix;
    vector<int>::iterator iter;
     int result = 0;
    
    for(int i = 0 ; i < list.size(); i++){
        if( goal >= list[i] && result < list[i] ){
            result = list[i]; //���Ҵ� �ϳ� �ۿ� ���µ� �亸�� �����鼭 �ִ밪�� �����ϴ� ���.
        }
        for(int j = 0 ; j < list.size(); j++){
            int sum = list[i] + list[j];
            
            if( sum == goal) //Ȥ�� 2*2���� ������ �ִٸ� �ٷ� return
                return sum;
            
            iter = find(matrix.begin(), matrix.end(), sum);
            if(iter == matrix.end() && goal >= sum)                
                matrix.push_back(sum); //������ ���ٸ�.. ��, ���Ұ� matrix�� ���ԵǾ� ���� �ʴٸ� �߰�.
        }
    }//2*2�� ����� ���ʿ� matrix�� ��� �� �������� nextMatrix�� matrix list�� �̿��Ͽ� while���� �߰��Ͽ� ���������� �ݺ��۾�.
    
    //���� �۾��ϱ� ���� ����� ��ġ�ϴ� ���Ұ� �ִ��� ã�Ƴ��� return�ϱ�. while���� ���鶧�� �� �� ȸ������ �� ������ ã�Ҵ����� ��� üũ�ؾ���.
    iter = find(matrix.begin(), matrix.end(), goal);
    if(iter != matrix.end())
        return *iter;
    
    while( matrix.size() > 0){
        for(int i = 0 ; i < list.size(); i++){
            for(int j = 0 ; j < matrix.size(); j++){
                int sum = list[i] + matrix[j];

                iter = find(tempMatrix.begin(), tempMatrix.end(), sum);
                if(iter == tempMatrix.end() && goal >= sum){
                    //������ ���ٸ�.. ��, ���Ұ� matrix�� ���ԵǾ� ���� �ʴٸ� �߰�.
                    tempMatrix.push_back(sum);
                }
            }
        }
    
        iter = find(matrix.begin(), matrix.end(), goal);
        if(iter != matrix.end())
            return *iter;
        else if(result < *max_element(matrix.begin(), matrix.end()))
            result = *max_element(matrix.begin(), matrix.end());

        //tempMatrix�� ��Ҵ� ���빰�� �ٽ� matrix���� �����ϴ� �۾�.
        matrix.clear();
        for(int i = 0 ; i < tempMatrix.size(); i++)
            matrix.push_back(tempMatrix[i]);
        tempMatrix.clear();
    }
    
    return result;
}

int findMax(vector<int>& list, int goal){
    int result = 0, temp = 2; 
    bool downCheck = false; //��� ���ڰ� goal���� �� ū�� Ȯ��.
    
    vector<int>::iterator iter;
    for( iter = list.begin(); iter != list.end(); iter++ )
        if(*iter <= goal ){
        downCheck = true; //upCheck�� true�� ���, �� ���� ���� �����Ƿ� ������ 0�� ������ ����.
        break;
    } 
    
    if( !downCheck ) //���� ���� �ִ� ��� 0�� return����.
        return 0;

    //�� �κ��� ����� ã�Ƽ� ���ϱ�.
    vector<int> cd; //Common denominator
    cd.push_back(1);

    while( temp <= goal ){
        if(goal % temp == 0){
            cd.push_back(temp);
        }
        ++temp;
    }

    for(int i = 0 ; i < list.size(); i++){
        vector<int>::iterator iter = find(cd.begin(), cd.end(), list[i]);
        if( iter != cd.end() ){
            return goal;
        }
    } //��������� ����� ã�Ƽ� return�ϴ� �κ�. ������� ������ �ٸ� ������� ã�⸦ ����.
    
    result = getOtherCaseMax(list, goal);
    
    //���⼭ goal�� ���� ���� �ִ� ��쵵 �ƴϰ� ������� �ƴ� ��츦 ���ϱ�.
   
    return result;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int c;
    cin >> c;
    for(int l = 0 ; l < c ; l++){
        int cs, goal; //case
        cin >> cs >> goal; //cs���� ����Ʈ�� ���빰�� ���Ͽ� goal�� ���� �����ϰԲ� �����.
        vector<int> list(cs);
        for(int i = 0 ; i < cs; i++)
            cin >> list[i];
        
        /* ���̽��� 3���� ����.
        1. goal�� ���� ���ڰ� �ִ°�?  -> goal return
        2. goal�� ������� ���� �� �ִ°�? -> ������� n�� ���ؼ� ���� ���� ���� -> goal return.
        3. ������� ���� goal���� ū��? -> 0�� return.
        4. ���� ��츦 ������Ű ���� ���, getOtherCaseMax �Լ��� �̿��Ͽ� ���� ������.
        */
        cout<<findMax(list,goal)<<endl;
        
    }
    
    return 0;
}
