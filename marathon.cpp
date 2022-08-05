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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if (a < b)
        {
            count++;
        }
        if (a < c)
        {
            count++;
        }
        if (a < d)
        {
            count++;
        }
        cout << count << endl;
    }

    return 0;
}