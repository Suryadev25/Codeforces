#include <bits/stdc++.h>
#define ll long long
// #define int int64_t
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, sum = 0;
        cin >> n >> m;
        int a[n][m];
        string s;
        for (int i = 0; i < n; ++i)
        {
            cin >> s;
            for (int j = 0; j < m; ++j)
            {
                a[i][j] = s[j] - '0';
                sum += a[i][j];
            }
        }
        int mini = INT_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
            for (int j = 0; j < m - 1; ++j)
            {
                int cnt = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
                if (cnt == 0)
                    continue;
                mini = min(mini, max(1, cnt - 1));
            }
        }
        if (sum == 0)
            cout << "0\n";
        else
            cout << 1 + sum - mini << "\n";
    }

    return 0;
}