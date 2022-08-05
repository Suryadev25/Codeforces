#include <bits/stdc++.h>
#define ll long long
using namespace std;

// bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
// {
//     return (a.second < b.second);
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i].first >> vec[i].second;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     vec.push_back(make_pair(a[i], b[i]));
    // }
    // sort(vec.begin(), vec.end(), sortbysec);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << vec[i].first << " " << vec[i].second << endl;
    // }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int w = 0, x = 0, y = 0, z = 0;
        for (int j = 0; j < n; j++)
        {
            if (vec[j].first > vec[i].first && vec[j].second == vec[i].second)
                w = 1;
            else if (vec[j].first < vec[i].first && vec[j].second == vec[i].second)
                x = 1;
            else if (vec[j].first == vec[i].first && vec[j].second < vec[i].second)
                y = 1;
            else if (vec[j].first == vec[i].first && vec[j].second > vec[i].second)
                z = 1;
        }
        if (w && x && y && z)
        {
            count++;
        }
    }
        cout << count << endl;

    return 0;
}