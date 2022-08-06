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
        int sum = 0;
        int n_y = 0;
        int n_x = 0;
        int p_y = 0;
        int p_x = 0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            // sum += abs(2 * x) + abs(2 * y);
            if (y < 0)
            {
                n_y = min(n_y, y);
            }
            if (x < 0)
            {
                n_x = min(n_x, x);
            }
            if (y >= 0)
            {
                p_y = max(p_y, y);
            }
            if (x >= 0)
            {

                p_x = max(p_x, x);
            }
        }
        cout << 2 * abs(n_y) + 2 * abs(n_x) + 2 * p_y + 2 * p_x << endl;
    }

    return 0;
}