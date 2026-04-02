#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int start_t, current_t, remain_t, h, m, s;
    char c;
    vector<int> v1(3);
    vector<int> v2(3);
    
    cin >> v1[0] >> c >> v1[1] >> c >> v1[2];
    cin >> v2[0] >> c >> v2[1] >> c >> v2[2];
    
    current_t = v1[0] * 3600 + v1[1] * 60 + v1[2];
    start_t = v2[0] * 3600 + v2[1] * 60 + v2[2];
    
    if(start_t > current_t){
        remain_t = start_t - current_t;
    }
    else if(start_t == current_t){
        remain_t = 0;
    }
    else{
        remain_t = start_t - current_t + 24 * 3600;
    }
    
    h = remain_t / 3600;
    if(h < 10){
        cout << "0" << h << ":";
    }
    else{
        cout << h << ":";
    }
    m = remain_t / 60 - h * 60;
    if(m < 10){
        cout << "0" << m << ":";
    }
    else{
        cout << m << ":";
    }
    s = remain_t - h * 3600 - m * 60;
        if(s < 10){
        cout << "0" << s;
    }
    else{
        cout << s;
    }
    
    return 0;
}