#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        int ap1, ap2, ap3;
        cin >> a >> b >> c;
        ap1 = 2 * b - c;
        ap2 = a + c;
        ap3 = 2 * b - a;
        cout << ((ap1 % a == 0 && ap1 > 0) || (ap2 % 2 == 0 && (ap2 / 2) % b == 0 && ap2 > 0) || (ap3 % c == 0 && ap3 > 0)
                     ? "Yes"
                     : "No")
             << endl;
    }
    return 0;
}