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
        int n, m;
        cin >> n >> m;
        if ((n + m) % 2 != 0)
        {
            cout << "Burenka" << endl;
        }
        else
        {
            cout << "Tonya" << endl;
        }
    }
    return 0;
}