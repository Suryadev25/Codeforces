#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "2" << endl;
        cout << n << " " << n - 1 << endl;

        for (int i = n; i > 2; i--)
        {
            cout << i << " " << i - 2 << endl;
        }
    }
    return 0;
}