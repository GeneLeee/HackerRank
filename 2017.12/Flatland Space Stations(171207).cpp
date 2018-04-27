//Lee HyunSik
//2017.12.07
//https://www.hackerrank.com/challenges/flatland-space-stations/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n >> m;
    vector<int> stops(m);
    if( n == m ){
        cout << 0 << endl;
        return 0;
    }
    
    for(int i = 0 ; i < m; i++)
        cin >> stops[i];
    sort(stops.begin(), stops.end());
    
    bool last = false; //last bustop;
    int stop1 = 0, stop2 = 0, pos=0, stack=0, max=0, sn =0; //StopNumber
    while(n > pos){
        if(!last && pos == stops[sn+1])
            ++sn;
        
        if( !last && sn == (m-1) ){
            //from now don't use stop2, don't change stop1
            last = true;
            stop1 = stops[m-1];
            stop2 = -1;
        }
        
        if(!last){
            stop1 = stops[sn];
            stop2 = stops[sn+1];
        }
        
        int now1, now2;
        if(!last) //stop1,2 both use
        {
            now1 = abs(pos - stop1);
            now2 = abs(pos - stop2);
            
            if( now1 < now2 && now1 > max)
                max = now1;
            else if( now2 < now1 && now2 > max)
                max = now2;
            else if( now1 == now2 && now1 > max)
                max = now1;
        }
        else{ //only use stop1
            now1 = abs(pos - stop1);
            if( now1 > max)
                max = now1;
        }
        
        ++pos;
    }
    
    cout << max << endl;
        
        
    
    return 0;
}
