#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;
const int _MAX = 2e6;
int m;

int arr[_MAX];
int solve(int l, int r)
{
    if (r - l == 1)
        return 0;
    int mid = (l + r) / 2;
    int mal = *max_element(arr + l, arr + mid);
    int mar = *max_element(arr + mid, arr + r);
    int ans = 0;
    if (mal > mar)
    {
        ++ans;
        for (int i = 0; i < (mid - l); i++)
        {
            swap(arr[l + i], arr[mid + i]);
        }
    }
    return solve(l, mid) + solve(mid, r) + ans;
}
int solve()
{
    int ans = solve(0, m);
    if (is_sorted(arr, arr + m))
        return ans;
    return -1;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        cin >> m;
        arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        cout << solve() << endl;
    }

    return 0;
}
