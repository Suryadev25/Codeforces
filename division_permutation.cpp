#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // ll t;
    // cin >> t;
    // while (t--)
    // {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &it : v)
    {
        cin >> it;
    }
    // for (auto it = v.end(); it != v.begin(); it--)
    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {

        cout << *it << " ";
    }
    // }

    return 0;
}