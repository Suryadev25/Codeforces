#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, count = 0;
    cin >> n;
    string s, a;
    unordered_map<string, int> mp;
    while (n--)
    {
        cin >> s;
        mp[s]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > count)
        {
            count = it->second;
            a = it->first;
        }
    }
    cout << a << endl;

    return 0;
}