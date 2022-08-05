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
        int sum = 1;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        int b[m];
        for (int i = 1; i <= m; i++)
        {
            cin >> b[i];
            sum += b[i];
        }
        while (sum > n)
        {

            sum -= n;
        }
        cout << a[sum] << endl;
    }

    return 0;
}