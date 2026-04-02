#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double r,w,l;
    int i = 1;
    while(true){
        cin >> r >> w>> l;
        if(r == 0){
            return 0;
        }
        double d = sqrt(w * w + l * l);
        cout << "Pizza " << i++ << " ";
        if(d > 2 * r){
            cout << "does not fit on the table.\n";
        }
        else{
            cout << "fits on the table.\n";
        }
    }
        
    return 0;
}