#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    ll a[n];
    ll b[n];
    ll ans = 0;
    ll count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans += max(count, (k - a[i] - a[i - 1]));
        a[i] += max(count, (k - a[i] - a[i - 1]));
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}