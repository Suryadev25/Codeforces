#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        ll ans = ((y + 1) * k - 1 + x - 2) / (x - 1) + k;
        cout << ans << endl;
    }

    return 0;
}