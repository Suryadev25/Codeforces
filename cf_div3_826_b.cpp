#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 3)
        {
            cout << "-1" << endl;
        }
        else if (n % 2 == 0)
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {

            for (int i = n; i > (n / 2) + 1; i--)
            {
                cout << i << " ";
            }
            for (int i = 1; i <= (n / 2) + 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}