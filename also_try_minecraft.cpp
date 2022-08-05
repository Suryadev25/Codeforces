#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[n] = {0};
    for (int i = 1; i <= n; i++)
    {
        if (a[i] - a[i - 1] < 0)
        {
            b[i] = abs(a[i] - a[i - 1]) + b[i - 1];
        }
        else
        {
            b[i] = b[i - 1];
        }
    }
    int c[n] = {0};
    reverse(a, a + n);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] - a[i - 1] < 0)
        {
            c[i] = abs(a[i] - a[i - 1]) + c[i - 1];
        }
        else
        {
            c[i] = c[i - 1];
        }
    }
    reverse(c, c + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << c[i] << " ";
    // }
    // cout << c[n-1];

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << b[y - 1] - b[x - 1] << endl;
        }

        else
        {

            cout << c[y - 1] - c[x - 1] << endl;
        }
    }
    return 0;
}