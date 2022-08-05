#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    int count = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (is_sorted(a, a + n))
    {
        cout << "0" << endl;
    }
    else
    {

        for (int i = 0; i < n - 1; i++)
        {
            count++;
            if (a[i] > a[i + 1])
            {
                break;
            }
        }
        for (int i = count; i < n; i++)
        {
            if (a[0] < a[i])
            {
                flag = 1;
                break;
            }
        }
        if (is_sorted(a, a + count) && is_sorted(a + count, a + n) && flag == 0)
        {
            cout << n - count << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}