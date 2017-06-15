//2017.05.23, 23weeks , https://www.hackerrank.com/challenges/day-of-the-programmer

#include <bits/stdc++.h>

using namespace std;

string solve(int year){
    // Complete this function
    string result = "";
    
    if( year >= 1919) //그레고리력
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            result = "12.09." + to_string(year);
        else
            result = "13.09." + to_string(year);
    else if ( year == 1918) //예외의 경우
        result = "26.09." + to_string(year);    
    else //율리우스력
        if( year % 4 == 0 )
            result = "12.09." + to_string(year);
        else
            result = "13.09." + to_string(year);    
    
    return result;
}

int main() {
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
