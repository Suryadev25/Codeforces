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
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;
        string ans;
        int count1 = 0;
        int count2 = 0;
        sort(a.begin(), a.end(), greater<char>());
        sort(b.begin(), b.end(), greater<char>());
        while (!a.empty() && !b.empty())
        {
            bool flag = 0;
            if (b.back() < a.back())
            {
                flag = 1;
            }
            if (flag == 1 && count2 == k)
            {
                flag = 0;
            }
            if (flag == 0 && count1 == k)
            {
                flag = 1;
            }
            if (flag == 1)
            {
                ans.push_back(b.back());
                count2++;
                count1 = 0;
                b.pop_back();
            }
            else
            {

                ans.push_back(a.back());
                count1++;
                count2 = 0;
                a.pop_back();
            }
        }
        cout << ans << endl;
    }

    return 0;
}