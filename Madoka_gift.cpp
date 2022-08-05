#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        bool f = 0;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            for (int j = 0; j < m; j++)
            {
                a[i][j] = s[j] - '0';
            }
        }
        for (int i = 0; i + 1 < n; i++)
        {

            for (int j = 0; j + 1 < m; j++)
            {
                int sum = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
                if (sum == 3)
                {
                    f = 1;
                }
            }
        }
        cout << (f == 1 ? "NO" : "YES") << endl;
    }
    return 0;
}