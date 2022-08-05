// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int count1 = 0, count2 = 0, count = 0;
//         ;
//         for (int i = 0; i < (int)s.length(); i++)
//         {
//             if (s[i] == '2')
//             {
//                 count2++;
//             }
//         }
//         if (count2 == 1)
//         {
//             cout << "NO" << endl;
//         }
//         else
//         {
//             cout << "YES" << endl;
//             for (int i = 0; i < (int)s.length(); i++)
//             {
//                 for (int j = 0; j < (int)s.length(); j++)
//                 {
//                     if (i == j)
//                     {
//                         cout << "X";
//                     }
//                     else if (s[i] == '1' || s[j] == '1')
//                     {
//                         cout << "=";
//                     }
//                     else if (i == s[j])
//                     {
//                         cout << "+";
//                     }
//                     count++;
//                     if (count % n == 0)
//                     {
//                         cout << endl;
//                     }
//                 }
//             }
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> id;
        for (int i = 0; i < n; ++i)
            if (s[i] == '2')
                id.push_back(i);
        int k = id.size();
        if (k == 1 || k == 2)
        {
            cout << "NO\n";
            continue;
        }
        vector<string> t(n, string(n, '='));
        for (int i = 0; i < n; ++i)
            t[i][i] = 'X';
        for (int i = 0; i < k; ++i)
        {
            int x = id[i], y = id[(i + 1) % k];
            t[x][y] = '+';
            t[y][x] = '-';
        }
        cout << "YES\n";
        for (int i = 0; i < n; ++i)
            cout << t[i] << '\n';
    }
}