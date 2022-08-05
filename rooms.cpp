#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int count = 0;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        if (q - p >= 2)
        {
            count++;
        }
        // else
        // {
        //     count = 0;
        // }
    }
        cout << count << endl;
    return 0;
}