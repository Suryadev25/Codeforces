#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int count = 0;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (isupper(*it))
        {
            count++;
        }
    }
    if ((islower(s[0])) && (count == s.length() - 1))
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);
        cout << s << endl;
    }
    else if (count == s.length())
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }
    return 0;
}