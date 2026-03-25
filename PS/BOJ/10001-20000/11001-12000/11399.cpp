#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int sum1 = 0;
    int sum2 = 0;

    cin >> N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    for(int x : v) {
        sum1 = sum1 + x;
        sum2 = sum2 + sum1;
    }
    
    cout << sum2;
    
    return 0;
}