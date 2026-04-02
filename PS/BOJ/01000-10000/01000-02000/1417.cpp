#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int dasom1;
    int dasom2;
    cin >> N;
    vector<int> v(N);
    
    cin >> dasom1;
    dasom2 = dasom1;
    
    for(int i=0; i<N-1; i++){
        cin >> v[i];
    }
    
    while(dasom2 <= *max_element(v.begin(), v.end())){
        auto it = max_element(v.begin(), v.end());
        *it = *max_element(v.begin(), v.end()) - 1;
        dasom2++;
    }
    
    cout << dasom2-dasom1;
    
    return 0;
}