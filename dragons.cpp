#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s, n;
    cin >> s >> n;
    pair<int, int> x[n];
    int y[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i].first >> x[i].second;
        }
    sort(x, x + n);
    for (int i = 0; i < n; i++)
    {
        if (s >x[i].first)
        {

            s += x[i].second;
            count++;
        }
    }
    if (count == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}