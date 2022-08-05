#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;
    int sum = 0;
    vector<vector<int>> v1(m, vector<int>(n));
    vector<vector<int>> v2(m, vector<int>(n, 1));
    vector<vector<int>> v3(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v1[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v1[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    v2[i][k] = 0;
                }
                for (int l = 0; l < m; l++)
                {
                    v2[l][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                v3[i][j] = max(v3[i][j], v2[i][k]);
            }
            for (int l = 0; l < m; l++)
            {
                v3[i][j] = max(v3[i][j], v2[l][j]);
            }
            if (v3[i][j] != v1[i][j])
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
