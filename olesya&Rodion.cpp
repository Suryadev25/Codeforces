#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, t;
    cin >> n >> t;
    // int a[n];
    if (n == 1 && t == 10)
    {
        cout << "-1" << endl;
    }

    else if (t < 10)
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << "1";
        }

        cout << "0" << endl;
    }
    return 0;
}