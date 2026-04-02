#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K, P;
    int a = 0;
    queue<int> q;
    cin >> N >> K >> P;
    vector<int> v(K/N);

    for(int i=1; i<=K; i++){
        q.push(i);
    }
    for(int i=1; i<=K; i++){
        if(i % N == 0){
            v[a] = q.front();
            a++;
        }
        q.pop();
        for(int j=0; j<P; j++){
            q.push(q.front());
            q.pop();
        }
    }
    
    sort(v.begin(), v.end());
    
    for(int x : v){
        cout << x << "\n";
    }
    
    return 0;
}