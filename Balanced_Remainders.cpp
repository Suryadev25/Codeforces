#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> v(n);
        ll count = 0;
        for (auto &it : v)
        {
            cin >> it;
        }
        vector<int> cnt(3);
        for (int it = 0; it < 3; it++)
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] % 3 == it)
                {
                    cnt[it]++;
                }
            }
        }

        while (*min_element(cnt.begin(), cnt.end()) != n / 3)
        {
            for (int i = 0; i < 3; i++)
            {
                if (cnt[i] > n / 3)
                {
                    count++;
                    cnt[i]--;
                    cnt[(i + 1) % 3]++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}