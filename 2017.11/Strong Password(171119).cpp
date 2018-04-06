//Lee HyunSik
//2017.11.19
//https://www.hackerrank.com/contests/hourrank-24/challenges/strong-password

#include <bits/stdc++.h>

using namespace std;

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    bool upper = false, lower = false, num = false, special = false;
    int temp = 0, count = 0;
    
    for(int i = 0 ; i < n ; i++){
        if( !upper && (65 <= password[i] && password[i] <= 90)){
            upper = true;
            ++temp;
        }
        
        if( !lower && (97 <= password[i] && password[i] <= 122)){
            lower = true;
            ++temp;
        }
        
        if( !num && (48 <= password[i] && password[i] <= 57)){
            num = true;
            ++temp;
        }
        
        if( !special && ((33 <= password[i] && password[i] <= 45 ) ||
            password[i] == 64)){
            special = true;
            ++temp;
        }
        
        if( upper && lower && num && special )
            break;
        
    }
    
    count = 4 - temp;
    
    if(n + count < 6)
        count += 6 - (n + count);
    
    
    return count;
}

int main() {
    int n;
    cin >> n;
    string password;
    cin >> password;
    int answer = minimumNumber(n, password);
    cout << answer << endl;
    return 0;
}
x