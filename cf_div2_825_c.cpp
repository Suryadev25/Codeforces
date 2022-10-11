#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int ans[n + 1];
    ans[0] = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n + 1; i++)
    {
        ans[i] = min(ans[i - 1] + 1, a[i]);
    }
    for (int i = 0; i < n + 1; i++)
    {
        // cout << ans[i];
        count += ans[i];
    }
    cout << count << endl;
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