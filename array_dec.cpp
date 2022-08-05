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
        ll n;
        cin >> n;
        ll a[n];
        ll b[n];
        ll c[n];
        ll diff = 0;
        ll count = 0;
        ll flag = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (ll i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];
        }
        // cout << diff << endl;
        sort(c, c + n, greater<int>());
        ll ans = c[0];

        for (ll i = 0; i < n; i++)
        {
            if (b[i] > a[i])
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
            else
            {
                if (b[i] != 0 && (a[i] - b[i] != ans))
                {
                    // cout << a[i] - b[i];
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {

            cout << "YES" << endl;
        }
    }
    return 0;
}
