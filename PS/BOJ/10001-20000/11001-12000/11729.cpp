#include <iostream>
#include <cmath>

using namespace std;

void hanoiTop(int n, int a, int b, int c)
{
    if (n == 1)
    {
        cout << a << " " << c << "\n";
        return;
    }
    
    hanoiTop(n - 1, a, c, b);
    
    cout << a << " " << c << "\n";
    
    hanoiTop(n - 1, b, a, c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    long long cnt = pow(2, N) - 1;

    cout << cnt << "\n";
    
    hanoiTop(N, 1, 2, 3);
    
    return 0;
}