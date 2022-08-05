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
        int n, k;
        cin >> n >> k;
        int count = 0;

        if ((n % 2 != 0) && (k > 1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int i = 1;
            int j = 1;
            while (i < n * k)
            {
                cout << i << " ";
                i += n;
                count++;
                if (count % k == 0)
                {
                    cout << endl;
                    j++;
                    i = j;
                }
            }
            cout << n * k << endl;
        }
    }
    return 0;
}
