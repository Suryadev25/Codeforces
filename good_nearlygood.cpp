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
        ll a, b;
        cin >> a >> b;
        if (b == 1)
        {
            cout << "NO" << endl;
        }
        else if (b == 2)
        {
            cout << "YES" << endl;
            ll mul = a * 4;
            ll sum = mul - a;
            cout << a << " " << sum << " " << mul << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll mul = a * b;
            ll sum = mul - a;

            cout << a << " " << sum << " " << mul << endl;
        }
    }
    return 0;
}