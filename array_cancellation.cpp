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
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        reverse(a, a + n);
        partial_sum(a, a + n, a);
        ll ans = 0;
        // cout << max(ans, *max_element(a, a + n)) << endl;
    }
    return 0;
}