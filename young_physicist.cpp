#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int x[n];
    int y[n];
    int z[n];
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
        cin >> z[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum1 += x[i];
        sum2 += y[i];
        sum3 += z[i];
    }
    cout << (((sum1 == 0) && (sum2 == 0) && (sum3 == 0)) ? "YES\n" : "NO\n");
    return 0;
}