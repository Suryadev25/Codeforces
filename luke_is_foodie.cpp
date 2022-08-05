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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int low = a[0], high = low + (2 * x), ref = a[0], count = 0;

        for (int i = 0; i < n; i++)
        {
            if ((a[i] + (2 * x) < low) || (a[i] > high))
            {
                low = a[i];
                high = a[i] + (2 * x);
                ref = a[i];
                count++;
            }
            else
            {
                ref = max(ref, a[i]);
                if (a[i] < low)
                {
                    if (high - ref >= low - a[i])
                    {
                        low = a[i];
                        high = a[i] + (2 * x);
                    }
                    if (a[i] + (2 * x) < high)
                    {
                        low = a[i];
                        high = a[i] + (2 * x);
                        ref = a[i];
                        count++;
                    }
                }
            }
            // cout << low << " " << high << " " << ref << " " << count << endl;
        }
        cout << count << endl;
    }
    return 0;
}