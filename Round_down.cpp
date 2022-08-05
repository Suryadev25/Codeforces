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
        ll m;
        cin >> m;
        ll sum = 1;
        while (sum < (m))
        {
            sum *= 10;
        }
        if (sum == m)
        {

            cout << "0" << endl;
        }

        else
        {
            cout << m - (sum / 10) << endl;
        }
    }

    return 0;
}