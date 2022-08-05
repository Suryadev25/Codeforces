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
        int n, k;
        cin >> n >> k;
        int a[k];
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a, a + k, greater<int>());
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += n - a[i];
            count++;
            if (sum >= a[i + 1])
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}