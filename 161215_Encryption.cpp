//2017.02.01 업데이트, https://www.hackerrank.com/challenges/encryption
//1주차(2016.12.15)

//테스트 케이스 통과 2개 실패

#include <cmath>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string deleteSpace(string str){
    string newStr = "";
    
    for(int i = 0 ; i < str.size(); i++){
        if(str[i] != ' ')
            newStr += str[i];
    }
    return newStr;
}

int* findGrid(int leng){
    int row =1, col = 1;
    
    while(leng > row*row){  
        //증감식
        if(col == 1){
            col += 1;
        }else{
            col +=1;
            row += 1;
        }
    }
    row = row - 1; 
    col = col - 1;
    
    if ( col * row < leng ){
        row += 1;
    }
    static int grid[2] = {row, col};    
    
    return grid;
}

string doEncryption(string str, int* grid, int originSize){
    int col = grid[1], row = grid[0];
    string temp, result = "";
    vector<string> strList;
    int size = str.size(), count = 0;
    
    for(int i = 0 ; i < size ; i++){
        if(count % col == 0 && count > 0){
            strList.push_back(temp);
            temp = "";
        }
        temp += str[i];
        count += 1;
    } strList.push_back(temp);      
    
    for(int i = 0 ; i < col ; i++){
        for(int j = 0 ; j < row ; j++){
            if(strList[j][i]){
                result += strList[j][i];
                count = j;
            }
        }
        result += " ";
    }
    
    return result;
}

int main(){
    string s, str;
    cin >> s;
    int* grid;
    
    str = deleteSpace(s);
    grid = findGrid(str.size());
    
    cout<<doEncryption(str,grid,s.size())<<endl;

    return 0;
}