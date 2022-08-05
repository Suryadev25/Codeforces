// #include <bits/stdc++.h>
// #define ll long long
// #define maxi 100
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll r[maxi];
//         ll a[maxi];
//         ll c[maxi];
//         ll sumr = 0;
//         ll sumb = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> r[i];
//             sumr += r[i];
//             a[i] = {sumr};
//         }
//         sort(a, a + n);

//         ll m;
//         cin >> m;
//         ll b[maxi];
//         for (int i = 0; i < m; i++)
//         {
//             cin >> b[i];
//             sumb += b[i];
//             c[i] = {sumb};
//         }
//         sort(c, c + m);

//         ll sum = 0;
//         if (m >= n)
//         {
//             ll x[maxi];
//             ll y[maxi];
//             for (int i = 0; i < n; i++)
//             {
//                 sum += b[i];
//                 x[i] = {sum};
//                 sum += r[i];
//                 y[i] = {sum};
//             }
//             sort(x, x + n);
//             sort(y, y + n);
//             ll ans = max(y[n - 1], x[n - 1]);
//             for (int i = n; i < m; i++)
//             {
//                 sum += b[i];
//                 x[i] = {sum};
//             }
//             sort(x + n, x + m);
//             ll count = 0;

//             ll ans1 = max(ans, x[m - 1]);
//             ll ans2 = max(count, ans1);
//             ll ans3 = max(c[m - 1], ans2);
//             cout << max(a[n - 1], ans3) << endl;
//         }
//         else
//         {
//             ll x[maxi];
//             ll y[maxi];
//             for (int i = 0; i < m; i++)
//             {
//                 sum += r[i];
//                 x[i] = {sum};
//                 sum += b[i];
//                 y[i] = {sum};
//             }
//             sort(x, x + m);
//             sort(y, y + m);
//             ll ans = max(y[m - 1], x[m - 1]);
//             for (int i = m; i < n; i++)
//             {
//                 sum += r[i];
//                 x[i] = {sum};
//             }
//             sort(x + m, x + n);
//             ll count = 0;
//             ll ans1 = max(ans, x[n - 1]);
//             // cout << ans1 << endl;
//             ll ans2 = max(count, ans1);
//             // cout << ans2 << endl;
//             ll ans3 = max(c[m - 1], ans2);
//             // cout << ans3 << endl;
//             ll ans4 = max(a[n - 1], ans3);
//             cout << ans4 << endl;
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int r[n];
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        int m;
        cin >> m;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        partial_sum(r, r + n, r);
        partial_sum(b, b + m, b);
        cout << max(0, *max_element(r, r + n)) + max(0, *max_element(b, b + m)) << endl;
    }
    return 0;
}