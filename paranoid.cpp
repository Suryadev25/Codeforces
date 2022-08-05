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
        int ans = n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {

            if (i != 0 && s[i] != s[i - 1])
            {
                ans += i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}