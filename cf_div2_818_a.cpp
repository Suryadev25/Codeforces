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
        if (n % 3 == 0)
        {

            if (n % 2 == 0)
            {

                cout << (n * 2) + (n * 2) / 3 << endl;
            }
            else
            {

                cout << (n * 2) + (n * 2) / 3 - 1 << endl;
            }
        }
        else
        {
            int ans = n % 3;
            int ref = n * 2;
            int var = n - ans;
            int varr;
            if (var % 2 != 0)
            {
                varr = (var * 2) / 3 - 1;

                if (n % 2 == 0)
                {
                    cout << ref + varr + 1 << endl;
                }
                if (n % 2 != 0)
                {
                    cout << ref + varr << endl;
                }
            }
            if (var % 2 == 0)
            {
                varr = (var * 2) / 3;
                if (n % 2 == 0)
                {
                    cout << ref + varr << endl;
                }
                if (n % 2 != 0)
                {
                    cout << ref + varr - 1 << endl;
                }
            }
        }
    }

    return 0;
}