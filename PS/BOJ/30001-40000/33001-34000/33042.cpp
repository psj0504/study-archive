#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    map<string, int> map;
    cin >> N;

    for(int i=0; i<9; i++){
        string m = i + "m";
        string p = i + "p";
        string s = i + "s";
        string z = i + "z";
        map.insert({m, 0});
        map.insert({p, 0});
        map.insert({s, 0});
        map.insert({z, 0});
    }
    
    for(int i=1; i<=N; i++){
        string s;
        cin >> s;
        map[s]++;
        if(map[s] >= 5){
            cout << i;
            return 0;
        }
    }

    cout << 0;


    return 0;
}