#include <bits/stdc++.h>
using namespace std;
#define in long long
int main()
{
    in t;
    cin >> t;
    while (t--)
    {
        in n;
        cin >> n;
        set<in> s;
        for (in i = 1; i < sqrt(n+1); i++)
        {
            if (n >= i * i)
                s.insert(i * i);
            if (n >= i * i * i)
                s.insert(i * i * i);
        }
        cout << s.size() << endl;
    }
    return 0;
}