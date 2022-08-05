#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;
        ll a = s.length();
        ll b = t.length();
        ll ans = (a * b) / __gcd(a, b);
        string new_s = s;
        string new_t = t;
        // cout << ans << endl;
        // cout << a << " " << b << endl;

        while (a < ans)
        {
            new_s += s;
            a = new_s.length();
        }
        while (b < ans)
        {
            new_t += t;
            b = new_t.length();
        }

        // cout << new_s << " " << new_t << endl;
        if (new_s == new_t)
        {

            cout << new_t << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}

//************************Program for GCD and LCM***********************
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int num, num1, gcd;
//     cin >> num >> num1;
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0 && num1 % i == 0)
//         {
//             gcd = i;
//         }
//     }
//     cout << gcd << endl;
//     cout << (num * num1) / gcd;
//     return 0;
// }