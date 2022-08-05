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
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll ans1 = min(x, y);
        ll ans2 = max(x, y);
        ll ans = ans2 - ans1;
        ll sum1 = 0;
        ll sum2 = 0;
        ll sum3 = 0;
        ll sum = 0;
        ll sir = x + y;
        // cout << ans1 << endl;
        // cout << ans2 << endl;
        for (int i = ans1; i > 0; i--)
        {
            sum1 += b;
            // cout<<sum1<<endl;
        }
        for (int i = ans; i > 0; i--)
        {
            sum2 += a;
            // cout<<sum2<<endl;
        }
        sum = sum1 + sum2;
        // cout<<sum<<endl;

        for (int i = 0; i < sir; i++)
        {
            sum3 += a;
            // cout<<sum3<<endl;
        }
        cout << min(sum, sum3) << endl;
    }
    return 0;
}