#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s1, s2 = "hello";
    int j = 0, count = 0;
    cin >> s1;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s2[j] == s1[i])
        {
            j++;
            count++;
        }
    }

    cout << ((count == 5) ? "YES\n" : "NO\n");

    return 0;
}