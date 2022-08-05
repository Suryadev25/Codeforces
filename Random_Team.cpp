// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     ll m, n;
//     cin >> m >> n;
//     ll maxu = 0;
//     ll minu = 0;
//     for (int i = m - n; i > 0; i--)
//     {
//         maxu += i;
//     }
//     if (m % n == 0)
//     {
//         ll x = m / n - 1;
//         for (int i = x; i > 0; i--)
//         {
//             minu += i;
//         }
//         cout << minu * n << " " << maxu << endl;
//     }
//     if (m % n != 0)
//     {
//         if (m / n >= 2)
//         {

//             ll y = m / n - 1;
//             ll z = m / n;
//             for (int i = y; i > 0; i--)
//             {
//                 minu += i;
//             }
//             minu = minu * (n - 1);
//             for (int i = z; i > 0; i--)
//             {
//                 minu += i;
//             }
//             cout << minu << " " << maxu << endl;
//         }
//         else
//         {
//             ll count = 0;
//             while (m - count != n)
//             {
//                 count++;
//             }
//             cout << count << " " << maxu << endl;
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll m, n;
    cin >> m >> n;
    ll num1 = m - n + 1;
    ll num2 = m / n;
    ll maxi = (num1 * ((2 * num1) + (num1 - 1) * (-1)) / 2) - num1; // AP
    if (m % n == 0)
    {
        ll mini = (num2 * ((2 * num2) + (num2 - 1) * (-1)) / 2) - num2; // AP
        cout << mini * n << " " << maxi << endl;
    }
    else
    {
        ll mini = (num2 * ((2 * num2) + (num2 - 1) * (-1)) / 2) - num2; // AP
        mini *= n;
        mini += ((m % n) * (num2));
        cout << mini << " " << maxi << endl;
    }


    return 0;
}