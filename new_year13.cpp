#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll a, b;
    cin >> a >> b;
    int sum = a;
    while (a >= b)
    {
        sum += 1;
        a -= b;
        a += 1;
    }
    cout << sum << endl;
    return 0;
}