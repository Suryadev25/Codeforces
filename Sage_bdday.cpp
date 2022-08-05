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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
        swap(a[i], a[i + 1]);
        i++;
    }
    if (n % 2 == 0)
    {
        cout << n / 2 - 1 << endl;
    }
    else
    {
        cout << n / 2 << endl;
    }
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    return 0;
}