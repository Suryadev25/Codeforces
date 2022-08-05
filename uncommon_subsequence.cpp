#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << max(a.length(), b.length());
    }
    return 0;
}