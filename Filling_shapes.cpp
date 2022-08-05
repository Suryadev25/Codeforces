#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "0" << endl;
    }
    else
    {

        ll ans = pow(2, n / 2);
        cout << ans << endl;
    }

    return 0;
}