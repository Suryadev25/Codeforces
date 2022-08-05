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
    int arr[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};
    while (t--)
    {
        string s;
        int x;
        cin >> s >> x;
        int sum = 0;
        sum = (int)(s[0] - '0') * 600 + (int)(s[1] - '0') * 60 + (int)(s[3] - '0') * 10 + (int)(s[4] - '0') * 1;
        int count = 0;
        set<int> st;
        for (int i = 0; i < 1441; i++)
        {
            st.insert(sum);
            sum += x;
            sum %= 1440;
        }
        for (auto it : st)
        {
            for (int i = 0; i < 16; i++)
            {
                if (it == arr[i])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}