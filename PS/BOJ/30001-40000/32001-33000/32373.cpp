#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;
    vector<int> v(N);

    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    for(int i=0; i<N; i++){
        if(v[i] % K != i % K){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}