#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, C, M, fatigue = 0, work = 0;

    cin >> A >> B >> C >> M;
    
    for(int i=0; i<24; i++){
        if(fatigue + A > M){
            fatigue -= C;
            if(fatigue < 0){
                fatigue = 0;
            }
        }
        else{
            fatigue += A;
            work += B;
        }
    }
    
    cout << work;

    return 0;
}