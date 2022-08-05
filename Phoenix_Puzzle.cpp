#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isSquare(int x)
{
    int y = sqrt(x);
    return y * y == x;
}
void solve()
{

    int n;
    cin >> n;
    if (n % 2 == 0 && isSquare(n / 2))
    {
        cout << "YES" << endl;
    }
    else if (n % 4 == 0 && isSquare(n / 4))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}