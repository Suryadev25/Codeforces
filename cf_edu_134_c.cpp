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
        int dmax[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            while (b[j] < a[i])
                j++;
            cout << b[j] - a[i] << " ";
        }
        cout << endl;
        dmax[n - 1] = b[n - 1] - a[n - 1];
        int k = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i + 1] <= b[i])
            {
                dmax[i] = b[k] - a[i];
            }
            else
            {
                dmax[i] = b[i] - a[i];
                k = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << dmax[i] << " ";
        }
        cout << endl;
    }

    return 0;
}