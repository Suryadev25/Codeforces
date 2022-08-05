#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, k;
    cin >> n >> k;
    list<int> ls;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (find(ls.begin(), ls.end(), a) == ls.end())
        {
            if ((ls.size()) >= k)
            {

                ls.pop_back();
            }

            ls.insert(ls.begin(), a);
        }
    }
    cout << ls.size() << endl;
    for (auto it : ls)
    {
        cout << it << " ";
    }
    return 0;
}