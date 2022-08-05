#include <bits/stdc++.h>
#define ll long long
#define max 10000
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    char s;
    set<char> s1, s2;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j <= t; j++)
        {
            cin >> s;
            if (i == j || (j == t - i + 1))
            {
                s1.insert(s);
            }
            else
            {
                s2.insert(s);
            }
        }
    }
    if (s1 != s2 && s1.size() == 1 && s2.size() == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}