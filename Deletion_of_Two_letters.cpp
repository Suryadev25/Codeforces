#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        char ch;
        cin >> s >> ch;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ch && (i + 1) % 2 != 0)
            {
                count++;
            }
        }
        if (count > 0)
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