#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M, a;
    set<int> set;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> a;
        set.insert(a);
    }

    cin >> M;
    for(int i=0; i<M; i++){
        cin >> a;
        cout << set.count(a) << " ";
    }


    
    return 0;
}