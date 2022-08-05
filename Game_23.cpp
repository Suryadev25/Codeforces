#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    ll count = 0;
    while (n < m)
    {
        if (m % (n * 3) == 0)
        {
            n *= 3;
            count++;
        }
        else
        {
            n *= 2;
            count++;
        }
    }
    if (n != m)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << count << endl;
    }
    return 0;
}