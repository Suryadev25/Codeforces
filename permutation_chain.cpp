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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }
        int count = n;
        cout << n << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        swap(arr[1], arr[count]);
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        while (count > 2)
        {

            swap(arr[count], arr[count - 1]);
            for (int i = 1; i <= n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            count--;
        }
    }

    return 0;
}