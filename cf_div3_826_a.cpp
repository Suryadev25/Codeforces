#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "=" << endl;
        }
        else
        {
            if (a[a.length() - 1] == 'S')
            {
                if (b[b.length() - 1] == 'S')
                {
                    if (a.length() > b.length())
                    {
                        cout << "<" << endl;
                    }
                    else
                    {
                        cout << ">" << endl;
                    }
                }
                else
                {
                    cout << "<" << endl;
                }
            }
            if (a[a.length() - 1] == 'L')
            {
                if (b[b.length() - 1] == 'L')
                {
                    if (a.length() > b.length())
                    {
                        cout << ">" << endl;
                    }
                    else
                    {
                        cout << "<" << endl;
                    }
                }
                else
                {
                    cout << ">" << endl;
                }
            }
            if (a[a.length() - 1] == 'M')
            {
                if (b[b.length() - 1] == 'L')
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << ">" << endl;
                }
            }
        }
    }

    return 0;
}