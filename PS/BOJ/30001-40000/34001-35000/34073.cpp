#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector<string> v(N);

    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    for(string s : v){
        cout << s << "DORO ";
    }
    
    return 0;
}