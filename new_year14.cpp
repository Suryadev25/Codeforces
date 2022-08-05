
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, t, j, i, count = 0;
    cin >> n >> t;
    ll a[n];
    for (i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    for (j = 1; j < n; j)
    {
        j += a[j];
        if (j == t)
        {
            count++;
        }
    }
    cout << ((count == 1) ? "YES\n" : "NO\n");
    return 0;
}