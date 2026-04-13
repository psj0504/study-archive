#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    string s;
    set<string> set;
    
    cin >> N;
    
    if(N<4){
        cout << "sad";
        return 0;
    }
    
    for(int i=0; i<N; i++){
        cin >> s;
        if(s.size() >= 6 && s.substr(s.size()-6) == "Cheese"){
            set.insert(s);
        }
    }
    if(set.size() >= 4){
        cout << "yummy";
    }
    else{
        cout << "sad";
    }

    return 0;
}