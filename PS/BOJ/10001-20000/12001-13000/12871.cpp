#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2, s3, s4;

    cin >> s1;
    cin >> s2;

    int lc = lcm(s1.length(), s2.length());

    while(s3.length() < lc){
        s3 += s1;
    }
    while(s4.length() < lc){
        s4 += s2;
    }
    if(s3 == s4){
        cout << 1;
    }
    else{
        cout << 0;
    }

    return 0;
}