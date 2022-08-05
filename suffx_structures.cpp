// #include <bits/stdc++.h>
// #define ll long long
// #define int int64_t
// using namespace std;

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     string s, t;
//     cin >> s >> t;
//     int count = 0, flag = 0;
//     map<char, int> m1, m2;
//     for (char i : s)
//     {
//         m1[i]++;
//     }
//     for (char i : t)
//     {
//         m2[i]++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         m1[char('a' + i)] += 0;
//     }

//     if (s.find(t) != string::npos)
//     {
//         count = 1;
//     }

//     if (count == 1)
//     {
//         cout << "automaton" << endl;
//     }
//     else
//     {
//         for (auto it : m1)
//         {
//             if (it.second < m2[it.first])
//             {
//                 cout << "need tree" << endl;
//                 flag = 1;
//                 return 0;
//             }
//         }
//         for (auto it : m1)
//         {
//             if (flag == 0 && s.length() == t.length())
//             {
//                 cout << "array" << endl;
//                 return 0;
//             }
//             else
//             {
//                 cout << "both" << endl;
//                 return 0;
//             }
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <cmath>
#include <map>
using namespace std;
#define mod 1000 * 1000 * 1000 + 7
int main()
{
    string s, t;
    cin >> s >> t;
    map<char, int> m1, m2;

    //    s=aaa
    //    t=aa
    for (char i : s)
    {
        m1[i]++;
    }
    for (char i : t)
    {
        m2[i]++;
    }
    for (int i = 0; i < 26; i++)
    {
        m1[char('a' + i)] += 0;
    }
    bool flag = true;
    for (auto i : m1)
    {
        if (i.second < m2[i.first])
        {
            cout << "need tree\n";
            return 0;
        }
        else if (i.second > m2[i.first])
        {
            flag = false;
        }
    }
    int pos = 0;
    bool f2 = true;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == t[pos])
        {
            pos++;
        }
        if (pos == t.length())
        {
            break;
        }
    }
    if (pos != t.length())
    {
        f2 = false;
    }
    if (!f2 and !flag)
    {
        cout << "both\n";
    }
    else if (!f2)
    {
        cout << "array\n";
    }
    else
    {
        cout << "automaton\n";
    }
    return 0;
}
