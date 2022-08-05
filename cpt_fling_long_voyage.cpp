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
        ll count = 0;

        for (int i = 1; i <= n; i += 4)
        {
            count++;
        }
        for (int i = 0; i < n - count; i++)
        {
            cout << "9";
        }
        for (int i = 1; i <= n; i += 4)
        {
            cout << "8";
               }
        cout << endl;
    }

    return 0;
}