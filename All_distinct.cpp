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
        int a[n];
        unordered_map<int, int> mp;
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second % 2 == 0)
            {
                count1++;
            }
            count += it.second % 2;
        }
        if (count1 % 2 == 0)
        {
            cout << count + count1 << endl;
        }
        else
        {
            cout << count + count1 - 1 << endl;
        }
    }

    return 0;
}