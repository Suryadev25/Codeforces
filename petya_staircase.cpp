#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int a[m];
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        if (a[i] == 1 || a[i] == n)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    sort(a, a + m);
    for (int i = 0; i < m; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
        {
            count++;
            if (count > 1)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}