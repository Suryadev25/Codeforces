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
        ll n, m;
        cin >> n >> m;
        ll ans = n * m;
        ll count = 1;
        cout << "W";
        for (int i = 0; i < ans - 1; i++)
        {
            cout << "B";
            count++;
            if (count % m == 0)
            {
                cout << endl;
            }
        }
    }
    return 0;
}