#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m, a, b = 1;
    cin >> n >> m;
    ll sum = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        sum += (a - b + n) % n;
        b = a;
    }
    cout << sum << endl;

    return 0;
}