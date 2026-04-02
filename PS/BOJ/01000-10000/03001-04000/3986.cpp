#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    int cnt = 0;
    string S;
    
    cin >> N;
    
    for(int i=0; i<N; i++){
        stack<char> stk;
        cin >> S;
        if(S.length() % 2 != 0){
            continue;
        }
        
        for(int k=0; k<S.length(); k++){
            if(stk.empty()){
                stk.push(S[k]);
            }
            else if(stk.top() == S[k]){
                stk.pop();
            }
            else{
                stk.push(S[k]);
            }
        }
        if(stk.empty()){
            cnt++;
        }
    }
    
    cout << cnt;
            
    return 0;
}