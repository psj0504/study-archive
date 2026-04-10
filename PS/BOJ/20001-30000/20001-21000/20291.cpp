#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    string S, ext;

    map<string, int> map;
    vector<string> v;

    for(int i=0; i<N; i++){
        cin >> S;
        ext = S.substr(S.find('.') + 1);
        if(map.find(ext) == map.end()){
            map[ext] = 1;
            v.push_back(ext);
        }
        else{
            map[ext]++;
        }
    }
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " << map[v[i]] << "\n";
    }

    return 0;
}