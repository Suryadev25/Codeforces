#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << "0" << endl;
        }
        else if (a > b)
        {
            x = a % b;
            y = b - x;
            cout << y << endl;
        }
        else
        {
            x = b - a;
            cout << x << endl;
        }
    }
    return 0;
}