#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<string> v(5);

    for(int i=0; i<5; i++){
        cin >> v[i];
    }
    
    for(int i=0; i<15; i++){
        for(int k=0; k<5; k++){
            if(v[k].length() <= i){
                continue;
            }
            cout << v[k][i];
        }
    }
    
    return 0;
}