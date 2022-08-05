#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, s, t;
    cin >> n >> s >> t;
    int a[n];
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (s == t)
    {
        cout << "0" << endl;
    }
    else
    {
        for (int i = s; i <= n;)
        {
            count++;
            i = a[i];
            if (i == t)
            {
                break;
            }
            if (count > n)
            {

                break;
            }
        }
        if (count > n)
        {
            cout << "-1" << endl;
        }
        else
        cout << count << endl;
    }

    return 0;
}