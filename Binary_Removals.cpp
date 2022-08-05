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
        cin >> s;
        int i = s.find("11");
        int j = s.rfind("00");
        cout << (i != -1 && j != -1 && i < j ? "NO" : "YES") << endl;
    }

    return 0;
}