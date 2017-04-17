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
            //중요한 대회일 경우
            imList.push_back(tempLuck);
        }else{
            //중요한 대회가 아닐 경우
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