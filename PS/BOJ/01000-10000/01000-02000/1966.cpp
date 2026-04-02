#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, T, a;
    
    cin >> T;
    
    for(int i=0; i<T; i++){
        int cnt = 1;
        deque<int> q1;
        deque<int> q2;
        cin >> N >> M;
        
        for(int k=0; k<N; k++){
            cin >> a;
            q1.push_back(a);
            q2.push_back(k);
        }
        
        while(true){
            bool isMax = true;
            int x = q1.front();
            q1.pop_front();
            int y = q2.front();
            q2.pop_front();
            
            if(q1.empty() || x >= *max_element(q1.begin(), q1.end())) {
                if(y == M) {
                    break;
                }
                else {
                    cnt++;
                }
            }
            else {
                q1.push_back(x);
                q2.push_back(y);
            }
        }
        
        cout << cnt << "\n";
    }
    
    return 0;
}