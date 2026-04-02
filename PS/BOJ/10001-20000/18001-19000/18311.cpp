#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long N, K;
    long long sum = 0;
    long long totalDist = 0;
    cin >> N >> K;
    if(K == 0){
        cout << 1;
        return 0;
    }
    vector<int> v(N);

    for(int i=0; i<N; i++){
        cin >> v[i];
        totalDist += v[i];
    }
    int i = 0;
    if(K < totalDist){
        while(K >= sum){
            sum += v[i++];
            if(sum > K){
                cout << i;
                return 0;
            }
        }
    }
    else{
        i = N-1;
        K -= totalDist;
        while(K >= sum){
            sum += v[i];
            if(sum > K){
                cout << i+1;
                return 0;
            }
            i--;
        }
    }
                
    return 0;
}