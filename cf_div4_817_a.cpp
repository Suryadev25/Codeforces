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
        string s;
        cin >> s;
        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            sort(s.begin(), s.end());
            // cout << s;
            if (s == "Timru")
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}