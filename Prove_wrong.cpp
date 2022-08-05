// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     ll sum = 1;
//     cin >> n;
//     for (ll i = 0; i < n-1; i ++)
//     {
//         sum *= 3;
//     }
//     cout << sum;
//     return 0;
// }
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
        ll n;
        cin >> n;
        ll sum = 1;
        if (n >= 20)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << "1 ";
            for (int i = 0; i < n - 1; i++)
            {
                sum *= 3;
                cout << sum << " ";
            }
            cout << endl;
        }
    }

    return 0;
}