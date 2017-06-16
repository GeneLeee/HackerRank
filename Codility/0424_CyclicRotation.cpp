//2017.04.24, 19weeks, https://codility.com/programmers/lessons/2-arrays/cyclic_rotation/
//cor page : https://codility.com/demo/results/trainingR285HQ-DNQ/

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &list, int K) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> dupList(list.size());
    int listSize = list.size();
    
    for( int i = 0 ; i < listSize; i++){
        dupList[i] = list[i];
    }
    
        for(int i = 0 ; i < listSize ; i++){
        if( i+K >= listSize ){
            //cout<<"part1"<<endl;
            //list[i] = -1;
            //list[i] = dupList[ i + ((listSize - (i+K))%listSize) ];
            //'A' + ((k -  ('[' - s[i] ) % 26) ;
            //cout<<(((i+K) - listSize)%listSize)<<", "<<list[i]<<endl;
            list[ (((i+K) - listSize)%listSize) ] = dupList[i];
        }else{
            //cout<<"part2"<<endl;
            //cout<<i+K<<", "<<list[i]<<endl;
            list[i+K] = dupList[i];
        }
    }

    
    return list;
}