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
        ll n, x, y;
        cin >> n >> x >> y;
        ll a[n];
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                count++;
            }
        }
        if ((x % 2 != 0 && y % 2 != 0) || (x % 2 == 0 && y % 2 == 0))
        {
            if (count % 2 == 0)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Bob" << endl;
            }
        }
        else if ((x % 2 != 0 && y % 2 == 0) || (x % 2 == 0 && y % 2 != 0))
        {
            if (count % 2 == 0)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
    }
    return 0;
}