#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
#include <map>
#include <utility>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long N;
    vector<long long> A;
    vector<long long> B;
    cin >> N;

    for(int i=0; i<N; i++){
        long long a;
        cin >> a;
        A.push_back(a); 
    }

    for(int i=0; i<N; i++){
        long long b;
        cin >> b;
        B.push_back(b); 
    }

    for(int i=0; i<N; i++){
        cout << upper_bound(B.begin()+i, B.end(), A[i]) - B.begin() - i - 1 << " ";
    }

    return 0;
}