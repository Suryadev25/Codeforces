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
//         int n, k;
//         cin >> n >> k;
//         int a[n];
//         int x, y;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         for (int i = 0; i < k; i++)
//         {
//             cin >> x >> y;
//             int count = 0;
//             int count1 = 0;
//             int index = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 if (a[j] == x)
//                 {
//                     count = 1;
//                     index = j;
//                     // cout << index;
//                     break;
//                     // cout << a[j];
//                 }
//             }
//             if (count == 1)
//             {
//                 // cout << y;
//                 for (int h = index; h < n; h++)
//                 {
//                     if (a[h] == y)
//                     {
//                         count1 = 1;
//                     }
//                     // cout << count1;
//                 }
//                 if (count1 == 1)
//                 {
//                     cout << "YES" << endl;
//                 }
//                 else
//                 {
//                     cout << "NO" << endl;
//                 }
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
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
        int n, k;
        cin >> n >> k;
        int a[n];
        map<int, int> left, right;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {

            if (left[a[i]] == 0)
            {
                left[a[i]] = i; // a[i]== 4 and we are storing in mp[4] = index
            }
            right[a[i]] = i; // here also
        }

        while (k--)
        {
            int x, y;
            cin >> x >> y;
            if (left[x] && right[y] && left[x] < right[y])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}