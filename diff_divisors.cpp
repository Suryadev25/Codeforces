#include <bits/stdc++.h>
#define ll long long
using namespace std;

int isPrime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int d, i, j;
        cin >> d;
        i = 1 + d;
        while (isPrime(i) == 0)
        {
            i++;
        }
        j = i + d;
        while (isPrime(j) == 0)
        {
            j++;
        }
        cout << i * j << endl;
    }
    return 0;
}