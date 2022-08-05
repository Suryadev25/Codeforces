// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int a, b, c, d, e, f, g, h, i;
//     cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
//     if (b == c && c == d && d == f && f == g && g == h)
//     {
//         a = e = i = b;
//         cout << a << " " << b << " " << c << endl;
//         cout << d << " " << e << " " << f << endl;
//         cout << g << " " << h << " " << i << endl;
//     }
//     else
//     {

//         int sum1 = b + c;
//         int sum2 = c + f;
//         int sum3 = b + h;
//         double mid_ele = sum1 + sum2 + sum3 - max(sum1, max(sum2, sum3)) - min(sum1, min(sum2, sum3));
//         // cout << ceil(mid_ele / 2) << endl;
//         e = ceil(mid_ele / 2);
//         a = (b + e + h) - (b + c);
//         i = (b + e + h) - (c + f);

//         cout << a << " " << b << " " << c << endl;
//         cout << d << " " << e << " " << f << endl;
//         cout << g << " " << h << " " << i << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e, f, g, h, i;
int main()
{
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    cout << (f + h) / 2 << " " << b << " " << c << endl
         << d << " " << (d + f) / 2 << " " << f << endl
         << g << " " << h << " " << (b + d) / 2;
}