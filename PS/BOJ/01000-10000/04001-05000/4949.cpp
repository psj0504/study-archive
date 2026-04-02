#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string S;
    while(true){
        stack<char> stk;
        bool isBalance = true;
        
        getline(cin, S);
        
        if(S == "."){
            break;
        }
        
        for(int i=0; i<S.length(); i++){
            if (S[i] == '(' || S[i] == '[') {
                stk.push(S[i]);
            }
            else if(S[i] == ')') {
                if(stk.empty() || stk.top() != '(') {
                    isBalance = false;
                    break;
                }
                stk.pop();
            }
            else if(S[i] == ']') {
                if(stk.empty() || stk.top() != '[') {
                    isBalance = false;
                    break;
                }
                stk.pop();
            }
        }
        
        if(isBalance && stk.empty()){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
    }
    
    return 0;
}