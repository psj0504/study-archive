#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, d, m, y;
    cin >> N;
    string name, birth;

    map<string, string> map;
    vector<string> v(N);

    for(int i=0; i<N; i++){
        birth = "";
        cin >> name >> d >> m >> y;
        birth += to_string(y);
        if(m < 10){
            birth += "0";
        }
        birth += to_string(m);
        if(d < 10){
            birth += "0";
        }
        birth += to_string(d);
        map[birth] = name;
        v[i] = birth;
    }
    sort(v.begin(), v.end());
    
    cout << map[v[v.size()-1]] << "\n" << map[v[0]];

    return 0;
}