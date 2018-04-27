//Lee HyunSik
//2017.12.07
//https://www.hackerrank.com/challenges/the-time-in-words/submissions

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string returnHour(int h){
    string result = "";
    switch(h){
        case 1: result = "one"; break;
        case 2: result = "tow"; break;
        case 3: result = "three"; break;
        case 4: result = "four"; break;
        case 5: result = "five"; break;
        case 6: result = "six"; break;
        case 7: result = "seven"; break;
        case 8: result = "eight"; break;
        case 9: result = "nine"; break;
        case 10: result = "ten"; break;
        case 11: result = "eleven"; break;
        case 12: result = "twelve"; break;
        default: result = "error";
    }
    
    return result;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<string> minutes = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
        "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", 
        "twenty seven", "twenty eight", "twenty nine"
    };
    
    int hour, min;
    cin >> hour >> min;
    string hourStr = returnHour(hour);
    if( min >= 30){ //30 up
        if(min == 30)
            cout << "half past " << hourStr << endl;
        else if (min == 45)
            cout <<"quarter to " << returnHour(hour+1) << endl;
        else
            cout << minutes[(60-min)]<<" minutes to " << returnHour(hour+1) << endl;
    }else{ //30 down
        if(min == 0){
            cout << hourStr <<" o' clock"<<endl;
        }else if(min == 15){
            cout <<"quarter past "<< hourStr<<endl;
        }else{
            cout << minutes[min] <<" minutes past "<< hourStr <<endl; 
        }
    }
    
    
    return 0;
}
