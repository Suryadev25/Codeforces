#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> set;
        int n;
        cin >> n;
        int c = 0;
        int d;
        int pd = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> d;
            if (pd == d)
                continue;
            if (set.find(d) == set.end())
                c++;
            set[d]++;
            if (pd > d)
            {
                // calc ans
                ans = c - 1;
            }
            if (set[d] > 1)
            {
                ans = c;
            }
            pd = d;
        }
        cout << ans << endl;
    }
    return 0;
}
