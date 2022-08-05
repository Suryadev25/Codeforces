#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q, x, y;
    cin >> n >> q;
    int a[n];
    int b[n] = {};
    int c[n] = {};
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    for (int i = 1; i <= n; i++)
    {
        b[i] = b[i - 1] + a[i - 1];
    }
    sort(a, a + n, greater<int>());
    for (int i = 1; i <= n; i++)
    {
        c[i] = c[i - 1] + a[i - 1];
    }
    while (q--)
    {
        cin >> x >> y;
        cout << sum - c[x - y] - b[n - x] << endl;
    }

    return 0;
}