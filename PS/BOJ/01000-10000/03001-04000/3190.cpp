#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <map>
#include <utility>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K, L;
    int sc = 0;
    map<int, string> mL;
    vector<pair<int, int>> q;
    q.push_back({1, 1});
    vector<pair<int, int>> v;
    cin >> N;

    cin >> K;
    for(int i=0; i<K; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }

    cin >> L;
    for(int i=0; i<L; i++){
        int a;
        string s;
        cin >> a >> s;
        mL.insert({a, s});
    }

    int x = 1;
    int y = 1;
    string way = "east";
    while(true){
        sc++;
        if(way == "east"){
            x++;
        }
        else if(way == "west"){
            x--;
        }
        else if(way == "south"){
            y++;
        }
        else{
            y--;
        }
        pair<int, int> p = {x, y};

        if(find(q.begin(), q.end(), p) != q.end() || x > N || y > N || x < 1 || y < 1){
            cout << sc;
            return 0;
        }
        q.push_back(p);
        if(find(v.begin(), v.end(), p) != v.end()){
            v.erase(find(v.begin(), v.end(), p));
        }
        else{
            q.erase(q.begin());
        }

        if(mL.find(sc) != mL.end()){
            if(mL[sc] == "L"){
                if(way == "east"){
                    way = "north";
                }
                else if(way == "west"){
                    way = "south";
                }
                else if(way == "south"){
                    way = "east";
                }
                else{
                    way = "west";
                }
            }
            if(mL[sc] == "D"){
                if(way == "east"){
                    way = "south";
                }
                else if(way == "west"){
                    way = "north";
                }
                else if(way == "south"){
                    way = "west";
                }
                else{
                    way = "east";
                }
            }
        }

    }

    return 0;
}