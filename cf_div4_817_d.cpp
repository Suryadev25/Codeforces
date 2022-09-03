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
        int sum = 0;
        int count = 0;
        float len = s.length();
        for (int i = 0; i < len; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
            }
            else
            {
                sum += n - (i + 1);
            }
        }
        for (int i = 0; i < len / 2; i++)
        {
            if (s[i] == 'L')
            {
                // cout << n - (i + 1) - i << " ";
                sum += n - (i + 1) - i;
                count++;
                cout << sum << " ";
            }
            if (s[n - 1 - i] == 'R')
            {
                // cout << n - 1 - i - i << " ";
                sum += n - 1 - i - i;
                count++;
                cout << sum << " ";
            }
        }
        for (int i = count; i < n; i++)
        {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}