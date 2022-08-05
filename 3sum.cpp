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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 3; i++)
        {
            if ((a[i] + a[i + 1] + a[i + 2]) % 10 == 3)
            {
                cout << "YES" << endl;
                break;
            }
        }
        cout << "NO" << endl;
    }

    return 0;
}