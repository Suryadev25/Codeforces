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

    if (n < m)
    {
        cout << "-1" << endl;
    }
    else if (n == m)
    {
        cout << m << endl;
    }
    else
    {
        count = n / 2;
        count += n % 2;
        while (count % m != 0)
        {
            count ++;
        }

        cout << count << endl;
    }

    return 0;
}