#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = max(a, b);
        ll ans1 = min(a, b);
        ll count = 0;
        while (ans1 < ans)
        {
            ans1 *= 2;
            count++;
        }
        if (ans1 != ans)
        {
            cout << "-1" << endl;
        }
        else
        {
            ll niuu;
            ll biuu = 1;
            cout << count / 3 + min(biuu, count % 3) << endl;
        }
    }
    return 0;
}