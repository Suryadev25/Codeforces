#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int j = 1; j <= n; j++)
    {
        int b[n + 1] = {0}; // made every element of array 0
        int ans = j;
        while (b[ans] != 2)
        {
            b[ans]++;
            ans = a[ans]; // jumping to array element
        }
        cout << ans << " ";
    }

    return 0;
}