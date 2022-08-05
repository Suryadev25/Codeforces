#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll k;
    cin >> k;
    while (k--)
    {
        ll n, x, t;
        cin >> n >> x >> t;

        ll a = min(t / x, n - 1);
        ll b = (a * (a - 1)) / 2;
        ll c = (n - a) * a;
        cout << b + c << endl;
    }

    return 0;
}