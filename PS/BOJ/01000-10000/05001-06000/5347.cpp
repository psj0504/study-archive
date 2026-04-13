#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (a % b == 0){
        return b;
    }
    return GCD(b, a % b);
}

long long LCM(long long a, long long b)
{
    return a / GCD(a, b) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, a, b;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a >> b;
        cout << LCM(a, b) << '\n';
    }
    return 0;
}