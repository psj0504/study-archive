#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    string s1, s2;
    cin >> N >> M;

    s1 = to_string(N);

    for(int i=0; i<N; i++){
        s2 += s1;
    }
    cout << s2.substr(0, M);

    return 0;
}