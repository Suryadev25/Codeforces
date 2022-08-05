#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, a;
    cin >> n >> a;
    ll arr[n];
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            count++;
        }
    }
    for (int i = 1; i < a && i <= n - a; i++)
    {
        if (arr[a - i - 1] + arr[a + i - 1] == 1)
        {
            count--;
        }
    }

    cout << count << endl;
    return 0;
}