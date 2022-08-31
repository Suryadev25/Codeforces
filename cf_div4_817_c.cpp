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
        vector<string> v;
        unordered_map<string, int> mp1;
        int one = 0, two = 0, three = 0;
        for (int i = 0; i < n * 3; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
            mp1[v[i]]++;
        }
        // for (auto it : mp1)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        for (int i = 0; i < n; i++)
        {
            if (mp1[v.at(i)] == 1)
            {
                one += 3;
            }
            else if (mp1[v.at(i)] == 2)
            {
                one += 1;
            }
            else
            {
                continue;
            }
        }
        for (int i = n; i < n + n; i++)
        {
            if (mp1[v.at(i)] == 1)
            {
                two += 3;
            }
            else if (mp1[v.at(i)] == 2)
            {
                two += 1;
            }
            else
            {
                continue;
            }
        }
        for (int i = n + n; i < n + n + n; i++)
        {
            if (mp1[v.at(i)] == 1)
            {
                three += 3;
            }
            else if (mp1[v.at(i)] == 2)
            {
                three += 1;
            }
            else
            {
                continue;
            }
        }
        cout << one << " " << two << " " << three << endl;
    }

    return 0;
}