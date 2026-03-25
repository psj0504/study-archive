#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1;
    int N, M, K;

    cin >> N >> M >> K;
    cin >> s1;
    string s2 = s1;
    for(int i=0; i<N; i++){
        if(s1[i] == 'R'){
            for(int j=max(0, i-K); j<=min(N, i+K); j++){
                s2[j] = 'R';
            }
        }
    }

    if(count(s2.begin(), s2.end(), 'R') <= M){
        cout << "Yes";
    }
    else{
        cout << "No";
    }

    return 0;
}