#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            int pos = a[i];
            int count = 1;
            while (pos != i)
            {
                count++;
                pos = a[pos];
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}