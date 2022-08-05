#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= 5; i++)
    {
        if (((sum + i) % (n + 1)) != 1)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}