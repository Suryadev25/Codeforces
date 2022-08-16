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
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            cout << "NO" << endl;
        }
        else if (k % 4 == 0 && k >= n * n)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (k % 2 != 0)
            {
                cout << "YES" << endl;
                for (int i = 1; i <= n; i += 2)
                {
                    cout << i << " " << i + 1 << endl;
                }
            }
            else
            {
                cout << "YES" << endl;
                for (int i = 3; i <= n; i += 4)
                {
                    cout << i << " " << i + 1 << endl;
                }
                for (int i = 2; i <= n; i += 4)
                {
                    cout << i << " " << i - 1 << endl;
                }
            }
        }
    }

    return 0;
}