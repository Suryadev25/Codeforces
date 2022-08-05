#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    string c = "aeiouAEIOUyY";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (auto it : c)
    {
        s.erase(remove(s.begin(), s.end(), it), s.end());
    }
    for (auto it : s)
    {
        cout << "." << it;
    }

    return 0;
}