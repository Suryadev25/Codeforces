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
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        ll ans1 = a * d;
        ll ans2 = c * b;
        if (a * d == b * c)
        {
            cout << "0" << endl;
        }
        else if (a == 0 || c == 0)
        {
            cout << "1" << endl;
        }
        else if (max(ans1, ans2) % min(ans1, ans2) == 0)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }

    return 0;
}