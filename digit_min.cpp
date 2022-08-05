#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 2)
        {
            cout << s[1] << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            cout << s[0] << endl;
        }
    }
    return 0;
}