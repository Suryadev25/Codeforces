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

        ll l, r, a;
        cin >> l >> r >> a;
        ll ans = (r / a) + (r % a);

        ll m = r / a * a - 1;

        if (m >= l)
            ans = max(ans, m / a + m % a);
        cout << ans << endl;
    }
    return 0;
}