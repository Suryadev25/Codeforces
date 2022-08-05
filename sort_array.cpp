// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     ll n;
//     cin >> n;
//     int a[n];
//     int v1 = 0, v2 = 0;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         // cin >> a[i];
//         scanf("%d", &a[i]);
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] > a[i + 1])
//         {
//             v1 = i;
//             break;
//         }
//         else
//             continue;
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         if (a[i] < a[i - 1])
//         {
//             v2 = i;
//             break;
//         }
//         else
//             continue;
//     }
//     reverse(a + v1, a + v2 + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         if (a[i] < a[i + 1])
//             count++;
//         else
//             break;
//     }

//     if (v1 == 0 || v2 == 0)
//     {
//         cout << "yes" << endl;
//         cout << "1 "
//              << "1" << endl;
//     }
//     else
//     {
//         if (count >= n)
//         {
//             cout << "yes" << endl;
//             cout << v1 << " " << v2 << endl;
//         }
//         else
//             cout << "no" << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstring>
#include <cmath>
#include <bitset>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <cstdlib>
#include <iomanip>
using namespace std;
#define int int64_t
int32_t main()
{
    int n;
    cin >> n;
    int ar[n + 10];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int st = -1;
    int en = n;
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (flag)
        {
            if (ar[i] < ar[i - 1])
            {
                flag = false;
                st = i - 1;
            }
        }
        else
        {
            if (ar[i] > ar[i - 1])
            {
                en = i;
                break;
            }
        }
    }
    if (st != -1)
    {
        reverse(ar + st, ar + en);
        for (int i = 1; i < n; i++)
        {
            if (ar[i] < ar[i - 1])
            {
                flag = false;
                break;
            }
            else
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "yes\n";
        if (st == -1)
        {
            cout << "1 1\n";
        }
        else
        {
            cout << st + 1 << " " << en << "\n";
        }
    }
    else
    {
        cout << "no\n";
    }
    return 0;
}
