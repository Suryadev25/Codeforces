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
        int n, m;
        cin >> n >> m;
        int ans = n * m;
        int final = 0;
        for (int i = m; i <= ans; i += m)
        {
            final += i;
        }
        for (int i = 1; i < m; i++)
        {
            final += i;
        }
        cout << final << endl;
    }

    return 0;
}