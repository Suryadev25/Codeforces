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
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        ll count = 0;
        ll count1 = 0;
        char crr[m];
        while (n--)
        {
            string s;
            cin >> s;
            for (int i = 0; i < m; i++)
            {

                if (s[i] == '.')
                {
                    count++;
                }
            }
            for (int i = 0; i < m; i++)
            {
                if ((s[i] == '.') && (s[i + 1] == '.'))
                {

                    count1++;
                    i++;
                }
            }
        }
        if (y >= 2 * x)
        {
            cout << count * x << endl;
        }
        else
        {
            cout << ((count - (2 * count1)) * x) + (count1 * y) << endl;
        }
    }
    return 0;
}