#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int l = 1;
        int r = n;
        while (l < n && a[l] <= a[l + 1])
        {
            l++;
        }
        while (r > 1 && a[r] <= a[r - 1])
        {
            r--;
        }
        cout << ((r <= l) ? "YES" : "NO") << endl;
    }

    return 0;
}