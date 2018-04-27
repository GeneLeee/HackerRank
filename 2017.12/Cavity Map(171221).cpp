//Lee HyunSik
//2017.12.21
//https://www.hackerrank.com/challenges/cavity-map/problem

#include <bits/stdc++.h>

using namespace std;

void printGrid(vector<string> &grid){
    int n = grid.size();
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++)
            cout << grid[i][j];
        cout << endl;
    }
}

bool findCavities(vector<string> &grid, int col, int row){
    bool result = true;
    int stack = 0;
    int n = grid.size();
    
    if( grid[col][row] > grid[col-1][row]){
        ++stack;
    }
    if( grid[col][row] > grid[col+1][row]){
        ++stack;
    }
    if( grid[col][row] > grid[col][row-1]){
        ++stack;
    }
    if( grid[col][row] > grid[col][row+1]){
        ++stack;
    }
    //cout << grid[col][row] << " : " << grid[col-1][row] << ", " << grid[col+1][row] <<" , " << grid[col][row-1] << " , " << grid[col][row+1] << ", result : " << stack << endl;
    
    if( stack == 4)
        result = true;
    else
        result = false;
    
    return result;
}

int main(){
    int n, cnt = 0;
    cin >> n;
    vector<string> grid(n);
    vector<int> gridX(n*n), gridY(n*n);
    
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    
    if( n <= 2 ){
        printGrid(grid);
        return 0;
    }
        
    for(int i = 1 ; i < n-1 ; i++){
        for(int j = 1 ; j < n-1 ; j++){
            if(findCavities(grid, i, j)){
                gridX[cnt] = i;
                gridY[cnt] = j;
                ++cnt;
            }
        }
    }
    
    for( int k = 0 ; k < cnt ; k++ ){
        grid[gridX[k]][gridY[k]] = 'X';
    }
    
    printGrid(grid);
    
    return 0;
}
