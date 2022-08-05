#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    map<string, string> mp;
    int n, m;
    cin >> n >> m;
    string a, b, w;

    while (m--)
    {
        cin >> a >> b;
        mp[a] = ((a.size() <= b.size()) ? a : b);
    }
    while (n--)
    {
        cin >> w;
        cout << mp[w] << " ";
    }
    return 0;
}