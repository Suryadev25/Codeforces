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
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        int ref_var = ((r - 1) + (c - 1)) % k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i + j) % k == ref_var)
                {
                    cout << "X";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }
    return 0;
}