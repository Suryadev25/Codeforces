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

        string s;
        cin >> s;
        ll a = s.length();
        ll x = 0;
        ll count1 = 0;
        ll count2 = 0;
        ll count3 = 0;
        for (int i = 0; i < a; i++)
        {
            if (s[0] == ')' || s[a - 1] == '(')
            {
                x = 1;
            }
            if (s[i] == '?')
            {
                count1++;
            }
        }
        if (x == 1)
        {
            cout << "NO" << endl;
        }
        else if (count1 % 2 == 0)
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