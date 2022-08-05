#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string s, x, y;
    cin >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i += n)
    {
        x += s[i];
    }
    for (int i = 0; i < n; i++)
    {
        y += x;
    }
    x = y;
    sort(x.begin(), x.end());
    if (x != s)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << y << endl;
    }
    return 0;
}
