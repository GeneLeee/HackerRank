//2017.05.15, 22weeks, https://codility.com/programmers/lessons/5-prefix_sums/min_avg_two_slice/
//correct answer page : https://codility.com/demo/results/trainingZGHWFH-V2H/

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    float min = 999999, val = 0;
    int pos = 0;
    for( unsigned i = 2 ; i <= 3; i++){
        for( unsigned j = 0 ; j < A.size()-i+1; j++){
            val = 0;
            for( unsigned k = j ; k < j+i ; k++){
                val += A[k];
            }
            float avg = val / i;
            //cout << j <<" from " << j+i-1 <<" plus is " << val << ", avg : "<<avg<<endl;
            if(min > avg){
                min = avg;
                pos = j;
                
                //cout<<"!!!"<<min<<", "<<pos<<endl;
            }
            
        }
        //cout<<"=======new=========="<<endl;
    }
    
    return pos;
}