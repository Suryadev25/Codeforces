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
        map<char, int> mp;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i]]++;
            if (mp[s[i]] == 2)
            {
                count -= 2;
                mp.clear();
            }
            count++;
        }
        cout << count << endl;
    }
    return 0;
}