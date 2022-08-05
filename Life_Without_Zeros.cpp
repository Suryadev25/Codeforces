#include <bits/stdc++.h>
#define ll long long
using namespace std;

int removing_zero(int n)
{
    int res = 0;
    int dig = 1;
    while (n > 0)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            res += (n % 10) * dig;
            dig *= 10;
            n /= 10;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int c = a + b;
    a = removing_zero(a);
    b = removing_zero(b);
    c = removing_zero(c);
    if (a + b == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}