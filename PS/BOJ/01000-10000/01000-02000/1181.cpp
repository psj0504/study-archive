#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool compare(const string& a, string& b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<string> v(N);

    for(int i=0; i<N; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end(), compare);
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for(string s : v){
        cout << s << "\n";
    }
    
    return 0;
}