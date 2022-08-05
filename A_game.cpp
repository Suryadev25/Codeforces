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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int zeros = count(a, a + n, 0);
        int onesb = 0;
        int onesf = 0;
        if (zeros == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {

                if (a[i] == 1)
                {
                    onesb++;
                }
                else
                {
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 1)
                {
                    onesf++;
                }
                else
                {
                    break;
                }
            }
            // cout << onesb << endl;
            cout << n - onesf - onesb + 1 << endl;
        }
    }

    return 0;
}