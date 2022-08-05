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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;
            // cout << a[i];
            for (int j = s.length(); j >= 0; j--)
            {
                if (s[j] == 'D')
                {
                    a[i] = (a[i] + 1) % 10;
                }
                else if (s[j] == 'U')
                {
                    if (a[i] == 0)
                    {
                        a[i] = 9;
                    }
                    else
                        a[i] = abs(a[i] - 1) % 10;
                }
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}