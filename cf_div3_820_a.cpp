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
        int a, b, c;
        cin >> a >> b >> c;
        if (abs(a - 1) == (abs(b - c) + abs(c - 1)))
        {
            cout << 3 << endl;
        }
        else if (a == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            int first = 0, second = 0;
            first = abs(a - 1);
            second = abs(b - c)+(c-1);
            if (first < second)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}