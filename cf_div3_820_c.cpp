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
        string s;
        cin >> s;
        string p;
        p = s;
        int n = s.length();
        int first = int(s[0]) - 96;
        int last = int(s[n - 1]) - 96;
        int cost = abs(first - last);
        if (first > last)
        {
            sort(p.begin(), p.end());
            int rev = 0;
            reverse(p.begin(), p.end());
            for (int i = 0; i < n; i++)
            {
                if (p[i] == s[0])
                    break;
                rev++;
            }

            int m = n - rev;
            int arr[m];
            vector<int> v;
            for (int i = rev + 1; i < n - 1; i++)
            {

                int pos = s.find(p[i]) + 1;
                arr[i] = pos;
                v.push_back(pos);
            }
            vector<int> vans;
            int count = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == v[i + 1])
                {

                    count++;
                    vans.push_back(v[i] + count);
                }
                else
                {
                    count = 0;
                    vans.push_back(v[i]);
                }
            }
            cout << cost << " " << m << endl;
            cout << "1 ";
            for (int i = 0; i < vans.size(); i++)
            {
                cout << vans[i] << " ";
            }
            cout << n << endl;
        }
        else
        {
            string q;
            q = s;
            sort(q.begin(), q.end());
            int rev = 0;
            // reverse(q.begin(), q.end());
            cout << q << endl;
            for (int i = 0; i < n; i++)
            {
                if (q[i] == s[0])
                    break;
                rev++;
            }
            int m = n - rev;
            int arr[m];
            vector<int> v;
            for (int i = rev + 1; i < n - 1; i++)
            {

                int pos = s.find(q[i]) + 1;
                arr[i] = pos;
                v.push_back(pos);
            }
            // for (int i = 0; i < v.size(); i++)
            // {
            //     cout << v[i] << " ";
            // }
            vector<int> vans;
            int count = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == v[i + 1])
                {

                    count++;
                    vans.push_back(v[i] + count);
                }
                else
                {
                    count = 0;
                    vans.push_back(v[i]);
                }
            }
            cout << cost << " " << m << endl;
            cout << "1 ";
            for (int i = 0; i < vans.size(); i++)
            {
                cout << vans[i] << " ";
            }
            cout << n << endl;
        }
    }

    return 0;
}