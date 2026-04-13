#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, a;
    int high = 0;
    int cnt = 0;
    cin >> N;
    stack<int> stack;

    for(int i=0; i<N; i++){
        cin >> a;
        stack.push(a);
    }

    for(int i=0; i<N; i++){
        if(high < stack.top()){
            high = stack.top();
            cnt++;
        }
        stack.pop();
    }

    cout << cnt;
    
    return 0;
}