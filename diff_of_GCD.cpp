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
        int n, l, r;
        cin >> n >> l >> r;
        int maxi = 0;
        for (int i = 1; i <= n; i++)
        {
            if (l % i != 0)
            {
                int temp;
                temp = l % i;
                temp = i - temp;
                maxi = max(maxi, temp);
            }
        }
        if (r < maxi + l)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
            {
                if (l % i == 0)
                {
                    cout << l << " ";
                }
                else
                {
                    int temp1;
                    temp1 = l % i;
                    temp1 = i - temp1;
                    cout << l + temp1 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}