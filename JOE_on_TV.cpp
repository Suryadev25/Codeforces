#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double n;
    cin >> n;
    double sum = 0;
    for (double i = 1; i <= n; i++)
    {
        sum += (1 / i);
    }
    cout << fixed << setprecision(12) << sum << endl;

    return 0;
}