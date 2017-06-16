//2017.04.24, 19weeks, https://codility.com/programmers/lessons/1-iterations/binary_gap/
//cor page : https://codility.com/demo/results/trainingZDYBZR-KKJ/

// you can use includes, for example:
 #include <algorithm>
 #include <string>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

using namespace std;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    int longest = 0, count = 0;
    
    string result, temp; 
    int quot = N, rem; //quotient, remainder

    do{
        //나머지를 먼저 구해야함.
        rem = quot % 2;
        temp += to_string(rem);
        quot = quot / 2;
    }while(quot > 0);
    
    //거꾸로 구한 몫을 뒤에서부터 앞으로
    for(unsigned int i = 0; i < temp.size() ; i++){
        result += temp[temp.size()-i-1];
    }
    
    bool frontSwitch = false, backSwitch = false;
    
    for(unsigned int i = 0 ; i < result.size(); i++ ){
        
        if( result[i] == '0' && result[i-1] == '1'){
            frontSwitch = true;
        }
            
        if( frontSwitch && result[i] == '0' ){
            ++count;
            if( result[i] =='0' && result[i+1] == '1' ) {
                backSwitch = true;
            }
        }else{
            count = 0;
            frontSwitch = false;
            backSwitch = false;
        }
        
        if( backSwitch && count > longest ){
            longest = count;
        }
    }
    
    return longest;
}