#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int a;
    int sum = 0;
    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> a;
        sum += a;
    }
    cout << sum - N + 1;
}