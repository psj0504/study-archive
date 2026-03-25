#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long T, A, B;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> A >> B;
        cout << (A*A) / (B*B) << "\n";
    }

    return 0;
}