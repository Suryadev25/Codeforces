#include <bits/stdc++.h>
#define ll long long
using namespace std;

int k;
string s;
bool prime[100];
void solve()
{
    for (int i = 0; i < k; i++)
    {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
        {
            cout << 1 << endl;
            cout << s[i] << endl;
            return;
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {

            if (!prime[(s[i] - '0') * 10 + (s[j] - '0')])
            {
                cout << 2 << endl;
                cout << s[i] << s[j] << endl;
                return;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 2; i < 100; i++)
    {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)

                prime[i] = false;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cin >> s;
        solve();
    }
    return 0;
}