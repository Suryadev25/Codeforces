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
        int n, q;
        cin >> n >> q;
        int a[n];
        int b[n] = {0};
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = n - 1; i >= 0; i--)
        // for (int i = 0; i < n; i++)
        {
            if (a[i] <= count)
            {
                b[i] = 1;
            }
            else if (count < q)
            {
                count++;
                // q--;
                b[i] = 1;
            }
            else
            {
                b[i] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << b[i];
        }
        cout << endl;
    }

    return 0;
}