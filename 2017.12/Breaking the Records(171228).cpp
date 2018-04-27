//Lee HyunSik
//2017.12.28
//https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int>& score) {
    // Complete this function
    int higest = score[0], lowest = score[0];
    int highBreak = 0, lowBreak = 0;
    for(int i = 1 ; i < score.size(); i++ ){
        if(score[i] > higest){
            higest = score[i];
            ++highBreak;
        }else if(score[i] < lowest){
            lowest = score[i];
            ++lowBreak;
        }
    }
    
    vector<int> result ={
        highBreak, lowBreak
    };
    /*
    for(int i = 0 ; i < result.size(); i++)
        cout << result[i] <<" ";
    cout<<endl;
    */
      
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
