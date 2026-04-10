#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string S1, S2;
    cin >> S1;

    for(int i= S1.length()-1; i>=0; i--){
        S2 += S1[i];
    }

    if(S1 == S2){
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}