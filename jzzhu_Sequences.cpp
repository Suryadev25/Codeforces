#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll x, y, n;
    cin >> x >> y >> n;
    long long c[6] = {x - y, x, y, y - x, -x, -y};
    cout << (c[n % 6] + 2 * mod) % mod;
    return 0;
}