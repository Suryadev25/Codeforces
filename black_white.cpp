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

        int k, n;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            v[i] = v[i - 1] + int(s[i - 1] == 'W');
        }
        int res = n;
        for (int i = k; i <= n; i++)
        {
            res = min(res, v[i] - v[i - k]);
        }
        cout << res << endl;
    }

    return 0;
}