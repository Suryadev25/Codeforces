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
        int n;
        cin >> n;
        int x[n], count = 0, flag = 0;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
            if (x[i] != i)
            {
                vec.push_back(i);
            }
        }
        for (int i = 0; i < n; i++)
        {

            if (x[i] != i)
            {
                count = i;
                break;
            }
        }
        // cout << count;
        for (auto it = vec.begin(); it != vec.end(); it++)
        {
            // cout << *it;
            count &= *it;
        }
   
            cout << count << endl;
    }
    return 0;
}