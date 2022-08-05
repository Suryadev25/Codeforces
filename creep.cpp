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
        int a, b;
        cin >> a >> b;
        for (int i = 0; i < min(a, b); i++)
        {
            cout << "01";
        }
        if (a > b)
        {
            for (int i = 0; i < a - b; i++)
            {
                cout << "0";
            }
        }
        else
        {
            for (int i = 0; i < b - a; i++)
            {
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}