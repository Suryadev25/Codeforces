
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, j, i;
    cin >> t;
    while (t--)
    {
        string s;
        string r = {0};
        cin >> s;
        // cout << str.length();
        int x;
        x = s.length();
        string s1, s2;

        // copy(s.begin(), s.begin() + x / 2, r.begin());
        for (i = 0; i < s.length() / 2; i++)
        {
            s1 += s[i];
        }

        for (j = s.length() / 2; j < s.length(); j++)
        {
            s2 += s[j];
        }
        if (x == 1)
        {
            cout << "NO" << endl;
        }

        else if (x % 2 == 0)
        {

            if (s1 == s2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}