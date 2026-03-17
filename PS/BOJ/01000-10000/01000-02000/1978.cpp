#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int prime = 0;
    bool isPrime = true;
    int N;
    int a;
    cin >> N;
    
    for(int i=0; i<N; i++){
        cin >> a;
        if(a == 1){
            continue;
        }
        for(int k=2; k<=sqrt(a); k++){
            if(a%k == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime == true){
            prime++;
        }
        isPrime = true;
    }
    cout << prime;
}