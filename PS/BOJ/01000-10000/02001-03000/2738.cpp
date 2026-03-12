#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int M;

    cin >> N >> M;

    vector<vector<int>> v(N, vector<int>(M));

    for(int i=0; i<N; i++){
        for(int k=0; k<M; k++){
            cin >> v[i][k];
        }
    }

    for(int i=0; i<N; i++){
        for(int k=0; k<M; k++){
            int a;
            cin >> a;
            v[i][k] += a;
        }
    }

    for(vector<int> x : v){
        for(int y : x){
            cout << y << " ";
        }
        cout << "\n";
    }
    
    
}