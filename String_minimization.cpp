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
        int n, m;
        cin >> n >> m;
        int a[n];
        char s[m];
        for (int i = 1; i <= m; i++)
        {
            s[i] = 'B';
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            if (s[a[i]] != 'A')
            {
                if (a[i] > (m + 1 - a[i]) && (s[m + 1 - a[i]] != 'A'))
                {
                    s[m + 1 - a[i]] = 'A';
                }
                else
                {
                    s[a[i]] = 'A';
                }
            }
            else if (s[m + 1 - a[i]] != 'A')
            {
                s[m + 1 - a[i]] = 'A';
            }
            else
            {
                continue;
            }
        }
        for (int i = 1; i <= m; i++)
        {

            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}