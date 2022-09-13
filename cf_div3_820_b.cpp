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
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i + 2] == '0' && s[i + 3] != '0')
            {
                string ref = "";
                ref.push_back(s[i]);
                ref.push_back(s[i + 1]);
                cout << char(96 + stoi(ref));
                i += 2;
            }
            else
            {
                char ref = s[i];
                cout << char(96 + (ref - '0'));
            }
        }
        cout << endl;
    }
    return 0;
}