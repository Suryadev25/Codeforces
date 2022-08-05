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
        ll n, i;
        cin >> n;
        ll count = 0;
        for (i = 4; i <= n; i += 3)
        {
            count = i;
        }
        if (n == 1)
        {
            cout << "-1" << endl;
        }
        else if (n == count)
        {
            cout << "7";
            for (int i = 2; i < n; i++)
            {
                cout << "2";
            }
            cout << "3" << endl;
        }

        else
        {
            for (ll i = 1; i < n; i++)
            {
                cout << "2";
            }
            cout << "3" << endl;
        }
    }
    return 0;
}