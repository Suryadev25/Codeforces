#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    ll lenn = s.length();
    ll one = count(s.begin(), s.end(), '1');
    ll zero = count(s.begin(), s.end(), '0');

    ll ans = 0;
    for (ll i = 1; i < lenn; i += 2)
    {
        ans++;
    }
    cout << (((((abs(one - zero)) % 2 == 0) && (one > 1)) || (one <= 1)) ? (ans) : (ans + 1));
    return 0;
}