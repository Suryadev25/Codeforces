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
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        ll sum = 0;
        ll count_O = 1;
        if (b < 0)
        {
            auto m = unique(s.begin(), s.end()) - s.begin();
            cout << (m / 2 + 1) * b + (n * a) << endl;
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                sum += 1 * a + b;
            }
            // sum = n * b + a * n;
            cout << sum << endl;
        }
    }

    return 0;
}
