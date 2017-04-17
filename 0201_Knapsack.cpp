// 2017.02.01 , 8주차, https://www.hackerrank.com/challenges/unbounded-knapsack

//중간중간 예외처리를 많이 한 이유는 프로그램을 중간에 중단 시킬 수 있으면 중간에 중단시켜 최대한 결론를 빠르게 도출해내기 위해서임.

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
            result = list[i]; //원소는 하나 밖에 없는데 답보다 작으면서 최대값을 충족하는 경우.
        }
        for(int j = 0 ; j < list.size(); j++){
            int sum = list[i] + list[j];
            
            if( sum == goal) //혹여 2*2에서 정답이 있다면 바로 return
                return sum;
            
            iter = find(matrix.begin(), matrix.end(), sum);
            if(iter == matrix.end() && goal >= sum)                
                matrix.push_back(sum); //끝까지 갔다면.. 즉, 원소가 matrix에 포함되어 있지 않다면 추가.
        }
    }//2*2의 결과를 최초에 matrix에 담고 그 다음에는 nextMatrix와 matrix list를 이용하여 while문에 추가하여 순차적으로 반복작업.
    
    //다음 작업하기 전에 정답과 일치하는 원소가 있는지 찾아내서 return하기. while문을 만들때도 한 번 회전했을 때 정답을 찾았는지를 계속 체크해야함.
    iter = find(matrix.begin(), matrix.end(), goal);
    if(iter != matrix.end())
        return *iter;
    
    while( matrix.size() > 0){
        for(int i = 0 ; i < list.size(); i++){
            for(int j = 0 ; j < matrix.size(); j++){
                int sum = list[i] + matrix[j];

                iter = find(tempMatrix.begin(), tempMatrix.end(), sum);
                if(iter == tempMatrix.end() && goal >= sum){
                    //끝까지 갔다면.. 즉, 원소가 matrix에 포함되어 있지 않다면 추가.
                    tempMatrix.push_back(sum);
                }
            }
        }
    
        iter = find(matrix.begin(), matrix.end(), goal);
        if(iter != matrix.end())
            return *iter;
        else if(result < *max_element(matrix.begin(), matrix.end()))
            result = *max_element(matrix.begin(), matrix.end());

        //tempMatrix에 담았던 내용물을 다시 matrix으로 이전하는 작업.
        matrix.clear();
        for(int i = 0 ; i < tempMatrix.size(); i++)
            matrix.push_back(tempMatrix[i]);
        tempMatrix.clear();
    }
    
    return result;
}

int findMax(vector<int>& list, int goal){
    int result = 0, temp = 2; 
    bool downCheck = false; //모든 인자가 goal보다 더 큰지 확인.
    
    vector<int>::iterator iter;
    for( iter = list.begin(); iter != list.end(); iter++ )
        if(*iter <= goal ){
        downCheck = true; //upCheck가 true일 경우, 더 낮은 수가 있으므로 무조건 0이 되지는 않음.
        break;
    } 
    
    if( !downCheck ) //높은 수만 있는 경우 0을 return해줌.
        return 0;

    //이 부분은 공약수 찾아서 구하기.
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
    } //여기까지가 공약수 찾아서 return하는 부분. 공약수가 없으면 다른 방법으로 찾기를 시작.
    
    result = getOtherCaseMax(list, goal);
    
    //여기서 goal과 같은 수가 있는 경우도 아니고 공약수도 아닌 경우를 구하기.
   
    return result;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int c;
    cin >> c;
    for(int l = 0 ; l < c ; l++){
        int cs, goal; //case
        cin >> cs >> goal; //cs개의 리스트의 내용물을 합하여 goal에 가장 인접하게끔 만들기.
        vector<int> list(cs);
        for(int i = 0 ; i < cs; i++)
            cin >> list[i];
        
        /* 케이스르 3개로 나눔.
        1. goal과 같은 인자가 있는가?  -> goal return
        2. goal의 공약수가 인자 중 있는가? -> 공약수를 n번 곱해서 정답 유추 가능 -> goal return.
        3. 약수들이 전부 goal보다 큰가? -> 0을 return.
        4. 위의 경우를 충족시키 못할 경우, getOtherCaseMax 함수를 이용하여 답을 유추함.
        */
        cout<<findMax(list,goal)<<endl;
        
    }
    
    return 0;
}
