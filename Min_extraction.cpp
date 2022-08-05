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
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            b[i] = a[i] - a[i - 1];
        }
        sort(b + 1, b + n, greater<int>());
        if (n == 1)
        {
            cout << a[0] << endl;
        }
        else
        {

            cout << max(a[0], b[1]) << endl;
        }
    }
    return 0;
}