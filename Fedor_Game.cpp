#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int ex;
    cin >> ex;
    int count = 0;
    for (int i = 0; i < m; i++)
    {

        int hello = __builtin_popcount(a[i] ^ ex);
        if (hello <= k)
            count++;
    }
    cout << count << endl;

    return 0;
}