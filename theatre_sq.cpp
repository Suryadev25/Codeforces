#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m, a;
    cin >> n >> m >> a;
    cout << (n / a + ((n % a) ? 1 : 0)) * (m / a + ((m % a) ? 1 : 0));
    return 0;
}