#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

bool solve()
{
    int n;
    cin >> n;
    int a[n];
    int ref = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        ref = __gcd(a[i - 1], a[i + 1]);
        if (a[i] % ref == 0)
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return false;
        }
    }
    cout << "YES" << endl;
    return true;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}