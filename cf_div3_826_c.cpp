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
        int b[n + 1];
        int ans = 0;
        int final = INT_MAX;
        vector<int> x;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        b[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            b[i] = b[i - 1] + a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            // cout << a[i] << endl;
            int sum = 0;
            int ref = 0;
            int count = i;
            int pt = i + 1;
            for (int j = i + 1; j <= n; j++)
            {

                // cout << a[j] << " ";
                sum += a[j];
                if (sum > b[i])
                {
                    ref = 1;
                }
                if (sum == b[i])
                {
                    sum = 0;
                    int ans = 0;
                    ans++;
                    count = max(count, j - pt + 1);
                    pt = j + 1;
                }
            }
            if (sum != 0)
            {
                ref = 1;
            }
            if (ref == 0)
            {
                final = min(final, count);
            }
        }

        cout << final << endl;
    }

    return 0;
}