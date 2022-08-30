#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        set<char> s;
        string s1, s2;
        cin >> s1 >> s2;
        s.insert(s1[0]);
        s.insert(s1[1]);
        s.insert(s2[0]);
        s.insert(s2[1]);
        cout << s.size() - 1 << endl;
        s.clear();
    }

    return 0;
}