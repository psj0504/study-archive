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
    
    int N;
    vector<int> v;
    cin >> N;

    for(int i=0; i<N; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    if(v.size() % 2 == 0){
        cout << v[v.size()/2 - 1];
    }
    else{
        cout << v[v.size()/2];
    }

    return 0;
}