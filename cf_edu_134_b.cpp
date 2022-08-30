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
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;
        if ((abs(n - sx) > d && abs(1 - sy) > d) || (abs(1 - sx) > d && abs(m - sy) > d))
        {
            cout << m + n - 2 << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}