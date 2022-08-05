#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int count_odd = 0;
    int count_even = 0;
    int great = 0;
    int n = s.length() - 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i]) % 2 != 0)
        {
            count_odd++;
        }
        if (int(s[i]) % 2 == 0 && s[n] > s[i])
        {
            great = 1;
        }
    }
    if (count_odd == s.length())
    {
        cout << "-1" << endl;
    }
    else if (great == 1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((int(s[i]) % 2 == 0) && s[n] > s[i])
            {
                swap(s[n], s[i]);
                break;
            }
        }
        cout << s << endl;
    }
    else
    {
        for (int i = n; i >= 0; i--)
        {
            if ((int(s[i]) % 2 == 0))
            {
                swap(s[n], s[i]);
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}