#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A;
    cin >> A;
    for(int i=1; i<=A; i++){
        if(30%(i+1) > i || 30%(i+1) == 0){
            cout << i << "\n";
        }
    }

    return 0;
}