#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[2 * n];
        int cnt = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 2 * n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i + n] - arr[i] < x)
            {
                cnt = 1;
                break;
            }
        }
        if (cnt == 1)
        {
            cout << "NO" << endl;
        }
        else
        {

            cout << "YES" << endl;
        }
    }

    return 0;
}