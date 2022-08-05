#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;
    ll sum = n;
    for (int i = 0; i <= n; i++)
    {
        sum += (n - i) * i;
    }
    cout << sum << endl;
    return 0;
}