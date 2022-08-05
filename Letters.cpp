#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    ll sum = 0;
    ll as[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        as[i] = sum;
    }

    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
        auto it = lower_bound(as, as + n, b[j]) - as;
        if (it == 0)
        {
            cout << "1 " << b[j] << endl;
        }
        else
        {
            cout << it + 1 << " " << (b[j] - as[it - 1]) % as[it] << endl;
        }
    }

    return 0;
}