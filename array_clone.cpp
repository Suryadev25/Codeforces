#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
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
        map<int, int> mp;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            // cout << it->second << endl;
            if (it->second > count)
            {
                count = it->second;
            }
        }

        int count1 = 0;
        while (count < n)
        {
            count1 += 1;
            count1 += min(n - count, count);
            count += min(n - count, count);
        }
        cout << count1 << endl;
    }

    return 0;
}