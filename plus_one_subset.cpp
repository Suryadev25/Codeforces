#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int *x, *y;
    int ans;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        x = max_element(arr, arr + n);
        y = min_element(arr, arr + n);

        ans = *x - *y;
        cout << ans << endl;
    }
    return 0;
}