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
        int n;
        cin >> n;
        vector<int> vec(n);
        for (auto &it : vec)
        {
            cin >> it;
        }
        sort(vec.rbegin(), vec.rend());
        for (auto &it : vec)
        {
            cout << it << " ";
        }
    }

    return 0;
}