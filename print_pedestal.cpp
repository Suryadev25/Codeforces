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
        int ans = n - 3;
        int low = ans / 3;
        int ref = n - low;
        if (ref % 2 == 0)
        {
            int high = ref / 2 + 1;
            int mid = ref / 2 - 1;
            cout << mid << " " << high << " " << low << endl;
        }
        else
        {
            int mid = ref / 2;
            int high = ref - mid;
            cout << mid << " " << high << " " << low << endl;
        }
    }
    return 0;
}