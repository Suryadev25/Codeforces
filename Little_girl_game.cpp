#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    map<char, int> mp;
    int count = -1;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            count++;
        }
    }
    if (count % 2 == 0 ||  count == -1)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
    return 0;
}