#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    deque<ll> dq;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll count = a[0];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            if (dq.empty() || a[i] < dq[0])
            {
                dq.push_front(a[i]);
            }
            else
            {
                dq.push_back(a[i]);
            }
        }
        for (auto it = dq.begin(); it != dq.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        dq.erase(dq.begin(), dq.end());
    }
    return 0;
}