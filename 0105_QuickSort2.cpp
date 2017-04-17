//2017.01.09 , https://www.hackerrank.com/challenges/quicksort2

#include <bits/stdc++.h> 
/*cstdio, cstdlib, cmath 등 C언어 표준헤더들과 stack, queue, vector 등과 같은 STL관련 헤더들을 포함.
 표준 헤더는 아니기 때문에 visual basic에서는 사용 불가. */

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
    
    for(iterVec = arr.begin() ; iterVec != arr.end() ; iterVec++){
        cout<<*iterVec<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);
    return 0;
}
