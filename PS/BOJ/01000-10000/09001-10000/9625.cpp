#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A = 1;
    int B = 0;
    int A2 = 1;
    int B2 = 0;
    int K;

    cin >> K;

    for(int i=0; i<K; i++){
        A = A2;
        B = B2;
        A2 -= A;
        A2 += B;
        B2 += A;
    }

    cout << A2 << " " << B2;

    return 0;
}