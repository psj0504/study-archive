#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    string S1, S2, S3;
    map<string, string> map;

    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> S1 >> S2;
        map[S1] = S2;
    }

    for(int i=0; i<M; i++){
        cin >> S3;
        cout << map[S3] << "\n";
    }


    
    return 0;
}