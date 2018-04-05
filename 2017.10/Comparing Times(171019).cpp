//Lee HyunSik
//2017.10.19
//https://www.hackerrank.com/contests/rookierank-3/challenges/comparing-times

#include <bits/stdc++.h>

using namespace std;

string stringSplit(string s,int start, int length ){
    string result = "";
    
    for(int i = start ; i < start + length ; i++)
        result += s[i];
    
    return result;
}

string timeCompare(string t1, string t2){
    // Complete this function
    
    string amPm1 = "", amPm2 = "";
    
    int hour1, hour2, min1, min2;
    
    amPm1 = t1.substr(5, 2);
    amPm2 = stringSplit(t2, 5, 2);
        
    if(amPm1 != amPm2 && amPm1 =="AM")
        return "First";
    else if(amPm1 != amPm2 && amPm1 =="PM")
        return "Second";
    else{
        
        hour1 = atoi(stringSplit(t1, 0, 2).c_str());
        hour2 = atoi(stringSplit(t2, 0, 2).c_str());

        if(hour1 != hour2 && hour1 == 12)
            return "First";
        else if(hour1 != hour2 && hour2 == 12)
            return "Second";
        else if(hour1 != hour2 && hour1 < hour2)
            return "First";
        else if(hour1 != hour2 && hour1 > hour2)
            return "Second";
        else{
            min1 = atoi(stringSplit(t1, 3,2).c_str());
            min2 = atoi(stringSplit(t2, 3,2).c_str());

            return ( min1 < min2 ) ? "First" : "Second";
       }   
    }
    
    return "ERROR";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string t1;
        string t2;
        cin >> t1 >> t2;
        string result = timeCompare(t1, t2);
        cout << result << endl;
    }
    return 0;
}
