#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        double n, m, k;
        cin >> n >> m >> k;
        ll jokes = n / k;
        if (jokes >= m)
        {
            cout << m << endl;
        }
        else
        {
            m -= jokes;
            double jollyLLB = ceil(m / (k - 1));
            cout << jokes - jollyLLB << endl;
        }
    }
    return 0;
}