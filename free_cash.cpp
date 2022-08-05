#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    ll count = INT_MIN;
    map<pair<ll, ll>, ll> mp;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        mp[{x, y}]++;
    }
    for (auto it : mp)
    {
        count = max(count, it.second);
    }
    cout << count << endl;
    return 0;
}