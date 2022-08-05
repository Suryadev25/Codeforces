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
        double n, k;
        cin >> n >> k;
        ll ans;
        if (n <= k)
        {
            ans = ceil(k / n);
            cout << ans << endl;
        }
        else if (n > k && fmod(n, k) == 0)
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