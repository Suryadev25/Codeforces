#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, a, b;
    cin >> n >> a >> b;
    if ((a >= b || b > a) && (a + b) < n)
    {
        cout << (b + 1) << endl;
    }
    else if ((a >= b || b > a) && (a + b) >= n)
    {
        cout << (n - a) << endl;
    }

    return 0;
}