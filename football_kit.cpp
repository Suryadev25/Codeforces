#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int h = 0;
    unordered_map<int, int> mp;
    vector<int> v(2 * n);
    vector<int> v1(n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < 2 * n; i += 2)
    {

        mp[v[i]]++;
    }
    for (int i = 1; i < 2 * n; i += 2)
    {
        v1[i / 2] = v[i];
    }

    for (int i = 0; i < v1.size(); i++)
    {

        int home = (n - 1) + mp[v1[i]];
        int away = (2 * n - 2) - home;
        cout << home << " " << away << endl;
    }
    return 0;
}