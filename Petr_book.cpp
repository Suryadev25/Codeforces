#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[7];

    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    int t = a[0];
    int i = 0;
    while (t < n)
    {
        i++;
        i %= 7;
        t += a[i];
    }
    cout << i + 1 << endl;

    return 0;
}