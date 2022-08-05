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
        ll r, b, g, w;
        cin >> r >> g >> b >> w;
        ll count = 0;
        count = r % 2 + g % 2 + b % 2 + w % 2;
        if ((count == 3) && (r == 0 || g == 0 || b == 0))
        {
            cout << "NO" << endl;
        }
        else if (count == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}