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
        if (n % 2 == 0)
        {
            int count = 0;
            int a[n] = {0};
            for (int i = 2; i <= n; i += 2)
            {
                a[count] = i;
                count += 2;
            }
            int ref = 1;
            for (int i = 1; i <= n; i += 2)
            {
                a[ref] = i;
                ref += 2;
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            int a[n] = {0};
            int reff = 1;
            a[0] = 1;
            for (int i = 3; i <= n; i += 2)
            {
                a[reff] = i;

                reff += 2;
            }
            int count = 2;
            for (int i = 2; i <= n; i += 2)
            {
                a[count] = i;
                count += 2;
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}