#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        ll sum = 0;
        ll ans = 0;
        for (i = 1; i < n; i++)
        {
            n -= 1;
            sum = 8 * i * i;
            ans += sum;
        }
        cout << ans << endl;
    }

    return 0;
}