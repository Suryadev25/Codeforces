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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        if (n == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(b, b + n);
            for (int i = 0; i < n; i++)
            {
                if (i < (n - 1) && b[i] == a[i])
                {
                    swap(b[i], b[i + 1]);
                    i++;
                }
                else if (i == (n - 1) && b[i] == a[i])
                {
                    swap(b[i], b[i - 1]);
                }
                else
                {
                    continue;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}