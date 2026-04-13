#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, x, y;
    cin >> N;

    vector<pair<int, int>> v;

    for (int i=0; i<N; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end(), compare);

    for (int i=0; i<N; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }

    return 0;
}