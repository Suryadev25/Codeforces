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
        ll a[n];
        ll b[n];
        ll hello = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                swap(a[i], b[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            hello += abs(a[i] - a[i + 1]);
            hello += abs(b[i] - b[i + 1]);
        }
        cout << hello << endl;
    }

    return 0;
}