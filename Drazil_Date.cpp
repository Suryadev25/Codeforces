#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, s;
    cin >> a >> b >> s;

    int sum = abs(a) + abs(b);
    if (s < sum)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (sum < s)
        {
            sum += 2;
        }
        if (sum == s)
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