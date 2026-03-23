#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    string s = "SS";
    cin >> N;
    if(N == 1){
        cout << "S";
        return 0;
    }
    else if(N == 2){
        cout << s;
        return 0;
    }
    for(int i=2; i<N; i++){
        if(s[s.size()-1] == 'S'){
            if(s[s.size()-2] == 'S'){
            s += "H";
            }
            else{
                s += "S";
            }
        }
        else{
            s += "S";
        }
    }
    cout << s;

    return 0;
}
