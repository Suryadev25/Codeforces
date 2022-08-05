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
        int n;
        string a;
        cin >> n >> a;
        int count = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '(')
            {
                count++;
            }
            else
            {
                count--;
                if (count < 0)
                {
                    count = 0;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
