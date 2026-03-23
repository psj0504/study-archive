    #include <iostream>

    using namespace std;

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int X, N;
        int cnt = 0;
        cin >> X >> N;
        if(N == 1){
            if(X >= 0){
                cout << 0;
            }
            else{
                cout << "INFINITE";
            }
        }
        else if(N%2 != 0){
            cout << "ERROR";
        }
        else if(N == 0 && X > 0){
            cout << "INFINITE";
        }
        else{
            for(int i=X-N/2; i>0; i -= N/2){
            cnt++;
        }
        cout << cnt;
        }
        
        return 0;
    }