

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

        for (int i = 0; i < n; i++)
        {

            if (n % 3 == 2)
            {

                cout << "2";
                i++;
                if (i == n - 1)
                {
                    break;
                }
                cout << "1";
                i++;
                if (i == n - 1)
                {
                    break;
                }
            }

            else if (n % 3 == 0)
            {

                cout << "2";
                i++;
                if (i == n)
                {
                    break;
                }
                cout << "1";
                i++;
                if (i == n)
                {
                    break;
                }
            }

            else
            {

                cout << "1";
                i++;
                if (i == n)
                {
                    break;
                }
                cout << "2";
                i++;
                if (i == n)
                {
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}