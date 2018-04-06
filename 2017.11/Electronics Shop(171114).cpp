//Lee HyunSik
//2017.11.14
//https://www.hackerrank.com/challenges/electronics-shop/problem

#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > key, vector < int > usb, int money){
    // Complete this function
    int biggest = 0;
    
    for( int i = 0 ; i < key.size(); i++){
        for(int j = 0 ; j < usb.size(); j++){
            int temp = key[i] + usb[j];
            if( biggest < temp && temp <= money)
                biggest = key[i] + usb[j];
        }
    }
    if(biggest == 0)
        biggest = -1;
    
    return biggest;
}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}
