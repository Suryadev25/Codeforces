#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int t, i;
    cin >> t;
    int a[26];
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        cin >> a[i];
    }
    int maxi = *max_element(a, a + 26);
    for (i = 0; i < s.length(); i++)
    {
        sum += (i + 1) * a[s[i] - 'a'];
    }
    for (int j = 0; j < t; j++, i++)
    {
        sum += (i + 1) * maxi;
    }
    cout << sum << endl;

    return 0;
}