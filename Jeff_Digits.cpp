#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 5)
        {
            count++;
        }
    }
    if (n == count)
    {
        cout << "-1" << endl;
    }
    else if (count < 9)
    {
        cout << "0" << endl;
    }
    else
    {
        ll ans = count % 9;
        for (int i = 0; i < count - ans; i++)
        {
            cout << "5";
        }
        for (int i = 0; i < n - count; i++)
        {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}