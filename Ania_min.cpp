#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == 0)
    {
        cout << s << endl;
    }
    else if (n == 1 && k == 1)
    {
        cout << "0" << endl;
    }
    else if (s[0] != '1')
    {
        s[0] = '1';
        k--;

        for (int i = 1; i < s.length() && k > 0; i++)
        {
            if (s[i] != '0')
            {
                s[i] = '0';
                k--;
            }
        }
        cout << s << endl;
    }
    else
    {
        for (int i = 1; i < s.length() && k > 0; i++)
        {
            if (s[i] != '0')
            {
                s[i] = '0';
                k--;
            }
        }
        cout << s << endl;
    }
    return 0;
}