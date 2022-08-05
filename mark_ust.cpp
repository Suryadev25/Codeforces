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
        ll n;
        cin >> n;
        ll a[n];
        ll index = 0;
        ll count_zero = 0;
        ll count = 0;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                count_zero++;
            }
        }
        if (count_zero == n)
        {
            cout << "0" << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                if (a[i] != 0)
                {
                    index = i;
                    break;
                }
            }
            for (ll i = index; i < n - 1; i++)
            {
                sum += a[i];
                if (a[i] == 0)
                    count++;
            }
            cout << sum + count << endl;
        }
    }

    return 0;
}