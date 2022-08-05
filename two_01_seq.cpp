// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         string a, b;
//         cin >> a >> b;
//         int count_zero_a = 0;
//         int count_one_a = 0;
//         int count_zero_b = 0;
//         int count_one_b = 0;
//         count_zero_a = count(a.begin(), a.end(), '0');
//         count_one_a = count(a.begin(), a.end(), '1');
//         count_zero_b = count(b.begin(), b.end(), '0');
//         count_one_b = count(b.begin(), b.end(), '1');
//         int found = a.find(b);
//         int index = 0;
//         auto i = unique(b.begin(), b.end()) - b.begin();
//         // cout << i;
//         if (found != string::npos)
//         {
//             index = 1;
//         }
//         if (count_zero_a < count_zero_b || count_one_a < count_one_b)
//         {
//             cout << "NO" << endl;
//         }
//         else if (index == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else if (index == 0 && i == n)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//         }
//         if (index == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else if (i == 1)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
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
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int ref = 0;
        if (b[0] == '1')
            ref = 1;
        int count = 0;

        for (int i = 1; i <= (n - m); i++)
        {
            if (ref == 1)
            {
                int h = max(a[i] - '0', a[i - 1] - '0');
                a[i] = h + '0';
            }
            else
            {
                int h = min(a[i] - '0', a[i - 1] - '0');
                a[i] = h + '0';
            }
        }
        string n1;
        for (int i = n - m; i < a.length(); i++)
        {
            n1 += a[i];
        }
        if (n1 == b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}