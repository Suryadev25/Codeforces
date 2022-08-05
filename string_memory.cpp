#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    vector<char> v;
    unordered_map<char, int> mp;
    set<char> st;
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            st.insert(s[i]);
            if (st.size() == 4)
            {
                st.clear();
                count++;
                i--;
                // cout << s[i];
            }
        }

        cout << count+1 << endl;
        st.clear();
    }

    return 0;
}