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
        int b[n];
        int c[n];
        int count = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            c[i] = b[i] - a[i];
        }
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (c[i] == 1)
            {
                x++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (x > 0)
            {

                if (c[i] == -1)
                {
                    ans = 1;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            count += (c[i]);
        }
        cout << abs(count) + ans << endl;
    }

    return 0;
}