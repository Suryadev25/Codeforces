#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        ll x, y, z;
        ll sum = b;
        y = b;
        z = c;

        x = (b * c) + b + a;

        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}