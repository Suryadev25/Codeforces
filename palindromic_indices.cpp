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
        string s1, s2;
        int count1 = 0;
        int count2 = 0;
        s1 = s.substr(0, n / 2);
        s2 = s.substr(n / 2, n);
        if (s[n / 2] == s[n / 2 - 1])
        {
            for (int i = s1.length() - 1; i >= 0; i--)
            {

                if (s1[i] == s[n / 2])
                    count1++;
                else
                    break;
            }
            for (int i = 0; i < s2.length(); i++)
            {
                if (s2[i] == s[n / 2])
                    count2++;
                else
                    break;
            }
            cout << count1 + count2 << endl;
        }
        else
            cout << "1" << endl;
    }

    return 0;
}