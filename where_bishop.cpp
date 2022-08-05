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
//         cout << "\n";
//         int count = 0;
//         char a[8][8];
//         for (int i = 0; i < 8; i++)
//         {
//             for (int j = 0; j < 8; j++)
//             {
//                 cin >> a[i][j];
//             }
//         }
//         for (int i = 0; i < 8; i++)
//         {
//             for (int j = 0; j < 8; j++)
//             {
//                 if (a[i][j] == '#')
//                 {
//                     if ((a[i - 1][j - 1] == '#') && (a[i - 1][j + 1] == '#'))
//                     {
//                         cout << i +1 << " " << j+1 << endl;
//                         count = 1;
//                         break;
//                     }
//                 }
//             }
//             if (count == 1)
//                 break;
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
        cout << "\n";
        int count = 0;
        vector<vector<char>> vec;
        for (int i = 0; i < 8; i++)
        {
            vector<char> temp;
            for (int j = 0; j < 8; j++)
            {
                char ch;
                cin >> ch;
                temp.push_back(ch);
            }
            vec.push_back(temp);
        }
        for (int i = 1; i < vec.size(); ++i)
        {
            for (int j = 1; j < vec[i].size(); ++j)
            {
                if (vec[i][j] == '#')
                {

                    if ((vec[i - 1][j - 1] == '#') && (vec[i - 1][j + 1] == '#'))
                    {
                        cout << i + 1 << " " << j + 1 << endl;
                        count = 1;
                        break;
                    }
                }
                // cout << vec[i][j];
            }
            if (count == 1)
                break;
            // cout << endl;
        }
    }

    return 0;
}