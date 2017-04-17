//2017.01.12 , 6주차, https://www.hackerrank.com/challenges/find-the-median

//해결 실패.. Median of medians Algorithm 참고해볼 것.
//현재 이 코드는 전혀 참고할 게 없음.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void quickSort(vector <int> &arr) {
   // Complete this function
    int pivot = arr[0];
    vector<int> leftList, rightList;
    
    
    vector<int>::iterator iterVec;
    for(iterVec = arr.begin() ; iterVec != arr.end() ; iterVec++){
        if(*iterVec < pivot)
            leftList.push_back(*iterVec);
        else if(*iterVec > pivot)
            rightList.push_back(*iterVec);
    }
    
    if(leftList.size() > 1)
        quickSort(leftList);
    
    if(rightList.size() > 1)
        quickSort(rightList);
    
    arr.clear();
    
    for(int i = 0 ; i < leftList.size(); i++)
        arr.push_back(leftList[i]);
    arr.push_back(pivot);
    for(int i = 0 ; i < rightList.size(); i++)
        arr.push_back(rightList[i]);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, temp, center;
    vector<int> arr;
    
    cin >> size;
    for(int i = 0 ; i < size ; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    
    center = arr.size()/2;
    sort(arr.begin(), arr.end());
    cout<<arr[center];
    
    //quickSort(arr);
    
    return 0;
}




