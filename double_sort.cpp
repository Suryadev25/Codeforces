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
        int b[n];
        int flag = 0;
        vector<pair<int, int>> vec;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if ((a[i] >= a[j]) && (b[i] >= b[j]))
                {
                    swap(a[i], a[j]);
                    swap(b[i], b[j]);
                    vec.push_back({i, j});
                }
                else if ((a[i] < a[j]) && (b[i] < b[j]))
                    continue;
            }
        }
        if (is_sorted(a + 1, a + n + 1) && is_sorted(b + 1, b + n + 1))
        {
            flag = 1;
        }

        if (flag == 1)
        {
            cout << vec.size() << endl;
            for (auto it : vec)
            {
                cout << it.first << " " << it.second << endl;
            }
        }
        else
            cout << "-1" << endl;
    }

    return 0;
}