//2017.01.09 업데이트 , https://www.hackerrank.com/challenges/the-time-in-words
//나중에 시간되면 map으로 다시 한 번 짜봤으면 좋겠음...

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string getTimeInWords(int time){
    string wtime = "";
    
    if(time ==  0 || time == 30 || time == 15)
        return "";
    
    if(time < 13){
        switch(time){
            case 1: wtime="one"; break;
            case 2: wtime="two"; break;
            case 3: wtime="three"; break;
            case 4: wtime="four"; break;
            case 5: wtime="five"; break;
            case 6: wtime="six"; break;
            case 7: wtime="seven"; break;
            case 8: wtime="eight"; break;
            case 9: wtime="nine"; break;
            case 10: wtime="ten"; break;
            case 11: wtime="eleven"; break;
            case 12: wtime="twelve"; break;
        }
    }else{
        switch(time){
            case 13: wtime="thirteen"; break;
            case 14: wtime="fourteen"; break;
            case 16: wtime="sixteen"; break;
            case 17: wtime="seventeen"; break;
            case 18: wtime="eighteen"; break;
            case 19: wtime="nineteen"; break;
            case 20: wtime="twenty"; break;
            case 21: wtime="twenty one"; break;
            case 22: wtime="twenty two"; break;
            case 23: wtime="twenty three"; break;
            case 24: wtime="twenty four"; break;
            case 25: wtime="twenty five"; break;
            case 26: wtime="twenty six"; break;
            case 27: wtime="twenty seven"; break;
            case 28: wtime="twenty eight"; break;
            case 29: wtime="twenty nine"; break;
        }
    }
    
    return wtime;
}

void printTimeInWords(int hour, int min){
    string result = "", wHour = "", wMin = "";
    bool over = false;
    
    if(min > 30){
        min = 60 - min;
        over = true;
    }
    
    wMin = getTimeInWords(min);
    
    if(min == 1) 
        wMin += " minute";
    else if(1 < min || min < 30){
        wMin += " minutes";
    }
    
    if(min == 15) 
       wMin = "quarter";
    else if(min == 30)
        wMin = "half";
    
    
    if(min == 0)
        result = getTimeInWords(hour) + " o' clock";
    else if(over){
        //30분 초과 예시
        wHour = getTimeInWords(hour+1);
        if(wHour == "thirteen")
            wHour = "one";
        result = wMin + " to " + wHour;
    }else if(0 < min && min <= 30){
        //30분 이하 예시
        result = wMin + " past " + getTimeInWords(hour);
    }
    
    cout<<result<<endl;
}

int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    
    printTimeInWords(h,m);
    
    return 0;
}
