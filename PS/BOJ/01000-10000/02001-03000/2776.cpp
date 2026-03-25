#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, M;
    cin >> T;

    for(int i=0; i<T; i++){
        cin >> N;
        vector<int> v(N);
        for(int j=0; j<N; j++){
            cin >> v[j];
        }
        
        sort(v.begin(), v.end());
        
        cin >> M;
        
        for(int k=0; k<M; k++){
            int a;
            cin >> a;
            if(binary_search(v.begin(), v.end(), a)){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
    }
        
    return 0;
}