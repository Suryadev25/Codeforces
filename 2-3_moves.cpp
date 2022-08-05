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
        if (n == 1)
        {
            cout << "2" << endl;
        }
        else
        {
            if (n % 3 == 0)
            {
                cout << n / 3 << endl;
            }
            else
            {
                cout << n / 3 + 1 << endl;
            }
        }
    }

    return 0;
}