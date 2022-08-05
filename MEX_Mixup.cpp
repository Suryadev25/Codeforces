#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll xorr[300001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t, i;
    cin >> t;
    for (i = 1; i <= 300000; i++)
    {
        xorr[i] = xorr[i - 1] ^ i;
    }
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        // cout << xorr[a-1] << endl;

        if (xorr[a - 1] == b)
        {
            cout << a << endl;
        }
        else if (xorr[a] == b)
        {
            cout << a + 2 << endl;
        }
        else
        {
            cout << a + 1 << endl;
        }
    }

    return 0;
}