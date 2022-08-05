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
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            sum += a[i];
        }
        int last = a[n - 1];
        int zeros = count(a, a + n, 0);
        if (zeros == n)
        {
            cout << "0" << endl;
        }
        else if (sum >= last || sum + 1 == last)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << last - sum << endl;
        }
    }
    return 0;
}