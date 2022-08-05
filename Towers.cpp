#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int count = 0;
    unordered_map<int, int> mp;
    int j;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        mp[j]++;
    }
    for (auto it : mp)
    {
        if (it.second > count)
        {
            count = it.second;
        }
    }
    cout << count << " ";
    cout << mp.size() << endl;
    return 0;
}