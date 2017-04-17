//2017.01.04 , https://www.hackerrank.com/challenges/luck-balance

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int conCount = 0, imCount = 0, count = 0;
    int tempLuck, tempIm, result = 0;
    vector<int> imList;
    
    
    cin >> conCount;
    cin >> imCount;
    
    for(int i = 0 ; i < conCount ; i++){
        cin >> tempLuck;
        //luckList.push_back(temp);
        cin >> tempIm;
        //imList.push_back(temp);
        
        if( tempIm ) {
            //�߿��� ��ȸ�� ���
            imList.push_back(tempLuck);
        }else{
            //�߿��� ��ȸ�� �ƴ� ���
            result += tempLuck;
        }
    }
    
    imCount = imList.size() - imCount;
    sort(imList.begin(), imList.end());
    
    for(int i = 0; i < imList.size() ; i++){
        if(count >= imCount){
            result += imList[i];
        } else{
            result -= imList[i];
            count++;
        }
    }
    
    cout<<result<<endl;
    
    return 0;
}