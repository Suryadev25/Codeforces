#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a;
    int add = 0;
    int mul = 0;
    int x = 0;
    while (n--)
    {
        cin >> a;
       int hello = 15;
        for (int i = 0; i <= 15; i++)
        {
            x = a + i;
            add = i;
            for (int j = 0; j <= 15; j++)
            {
                mul = j;
                if (x % 32768 == 0)
                    hello = min(hello, add + mul);
                x *= 2;
            }
        }
        cout << hello << " ";
    }
    cout << endl;
    return 0;
}