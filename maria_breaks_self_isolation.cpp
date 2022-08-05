#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t, i;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll count = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        for (i = n - 1; i >= 0; i--)
        {
            if (arr[i] <= i + 1)
            {
                count = 1;

                break;
            }
        }
        if (count == 1)
        {

            cout << i + 2 << endl;
        }
        else
        {

            cout << "1" << endl;
        }
    }
    return 0;
}