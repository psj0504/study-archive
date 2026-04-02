#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K;
    queue<int> q;
    
    cin >> N >> K;
    
    for(int i=1; i<=N; i++){
        q.push(i);
    }
    
    while(true){
        if(q.size() <= K){
            cout << q.front();
            break;
        }
        q.push(q.front());
        for(int k=0; k<K; k++){
            q.pop();
        }
    }
                
    return 0;
}