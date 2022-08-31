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
        string s1, s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == 'G')
            {
                s1[i] = 'B';
            }
        }
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] == 'G')
            {
                s2[i] = 'B';
            }
        }
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}