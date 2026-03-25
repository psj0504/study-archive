#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, k;
    cin >> N >> k;
    vector<int> v(N);

    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << v[k-1];

    return 0;
}