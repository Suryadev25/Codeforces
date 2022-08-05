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
        int x;
        cin >> x;
        int count = 0;
        int index = x;
        int arr[4];
        for (int i = 1; i <= 3; i++)
        {
            cin >> arr[i];
        }
        for (int counting = 1; counting <= 3; counting++)
        {
            if (arr[index] != 0)
            {
                count++;
                // counting++;
                index = arr[index];
            }
        }
        if (count == 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}