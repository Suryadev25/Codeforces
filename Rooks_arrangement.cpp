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
        int k, n;
        cin >> k >> n;
        int count = 0;
        int line = 0;
        int r = 1;
        if (k % 2 != 0 && n > k / 2 + 1)
        {
            cout << "-1" << endl;
        }
        else if (k % 2 == 0 && n > k / 2)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << "R";
            for (int i = 1; i < k * k - n + 1; i++)
            {
                count++;
                line++;
                if (line % k == 0)
                {
                    cout << endl;
                }

                cout << ".";
                if (count == k * 2 + 1 && r < n)
                {
                    cout << "R";
                    line++;
                    r++;
                    count = 0;
                }
            }
            cout << endl;
        }
    }
    return 0;
}