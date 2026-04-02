#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string S;
    stack<string> stk;
    bool isBalance = true;
    
    cin >> S;
    if(count(S.begin(), S.end(), '<') != count(S.begin(), S.end(), '>')){
        cout << "Keine Loesung";
        return 0;
    }
    
    for(int i=0; i<S.length(); i += 2){
        string qMark = S.substr(i, 2);
        if(stk.empty()){
            stk.push(qMark);
            cout << '[';
        }
        else if(stk.top() == qMark){
            stk.push(qMark);
            cout << '[';
        }
        else{
            stk.pop();
            cout << ']';
        }
    }
        
    return 0;
}