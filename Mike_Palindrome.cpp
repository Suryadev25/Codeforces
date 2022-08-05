#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int count = 0;
    int n = s.length();
    for (int i = 0; i < ceil(n / 2); i++)
    {
        if (s[i] != s[n - i - 1])
        {
            count++;
        }
    }
    cout << (((n % 2 == 0 && count == 0) || count > 1) ? "NO" : "YES");

    return 0;
}