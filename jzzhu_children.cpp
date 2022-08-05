#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    double a[n];
    ll largest = 0;
    ll indice = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (ceil(a[i] / m) >= largest)
        {
            largest = ceil(a[i] / m);

            indice = i;
        }
    }
    cout << indice << endl;

    return 0;
}