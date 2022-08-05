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
        string s[n];
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        for (int i = 0; i < n; i++)
        {
            bool ans = false;
            for (int j = 0; j < s[i].length(); j++)
            {
                string prefix = s[i].substr(0, j);
                cout << prefix << endl;
                string suffix = s[i].substr(j, s[i].length() - j);
                cout << suffix << endl;
                if (mp[prefix] && mp[suffix])
                {
                    ans = true;
                }
            }
            cout << ans;
        }
        cout << endl;
    }

    return 0;
}