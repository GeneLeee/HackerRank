//2017.02.01 업데이트, https://www.hackerrank.com/challenges/hackerland-radio-transmitters
//해결하지 못한 문제. 정답 코드 하단에 같이 첨부

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int x_i = 0;x_i < n;x_i++){
       cin >> arr[x_i];
    }
    ////
    
    sort(arr.begin(), arr.end());
    
    bool check = true;
    int nowNum = arr[0], count = 0;
    while(check){
        nowNum += (2 * k);
        //cout<<nowNum<<endl;
        count += 1;
        if(nowNum < arr[arr.size()-1]){
            nowNum += 1;
        }else{
            break;
        }
    }
    
    cout<<count<<endl;
        
    return 0;
}

/*

#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


int main()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> house(n);
    for(int x_i = 0; x_i < n; x_i++)
    {
        cin >> house[x_i];
    }
    sort (house.begin(), house.end());
    int number = 0;
    vector<int>::iterator it1 = house.begin();
    vector<int>::iterator it2 = house.begin();
    while (it2<house.end())
    {
        if (*it2-*it1<=k && *(it2+1)-*it1>k)
        {
            ++number; //put a transmitor in *it1
            it1 = it2;
            while (*it2-*it1<=k)
            {
                ++it2;
            }
            it1 = it2;
        }
        else if (*it2-*it1>k)
        {
            ++number;
            it1 = it2;
        }
        if (*(house.end()-1)-*it2<=k)
        {
            ++number;
            break;
        }

        ++it2;
    }

    cout << number;
    return 0;
}

*/