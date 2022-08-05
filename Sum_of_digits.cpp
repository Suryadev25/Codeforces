#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string n;
    cin >> n;
    int count = 0, sum = 0;
    while (n.length() > 1)
    {
        sum = 0;
        for (int i = 0; i < (int)n.length(); i++)
        {
            sum += n[i] - '0';
        }
        n = to_string(sum);
        count++;
    }
    cout << count << endl;

    return 0;
}