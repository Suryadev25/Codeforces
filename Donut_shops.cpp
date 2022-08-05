#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, x;
        cin >> a >> b >> c;
        if (a >= c)
        {
            // cout << "-1";
            x = -1;
            cout << x << " " << b << endl;
        }
        else if (a * b <= c && a < c)
        {
            cout << "1 "
                 << "-1" << endl;
        }
        else
        {
            cout << "1 " << b << endl;
        }
    }
    return 0;
}