#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string input;
        cin >> input;
        string ans;

        if (input[0] == '9')
        {
            int carry = 0;
            for (ll i = n - 1; i >= 0; i--)
            {
                int sub = (1 - (input[i] - '0') - carry);
                if (sub < 0)
                {
                    sub += 10;
                    carry = 1;
                }
                else
                {
                    carry = 0;
                }
                ans.push_back(sub + '0');
            }
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
        }
        else
        {

            for (ll i = 0; i < n; i++)
            {
                cout << 9 - (input[i] - '0');
            }
            cout << endl;
        }
    }

    return 0;
}