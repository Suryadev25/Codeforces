#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, x, y;
    while (t--)
    {
        cin >> a >> b;
        int ans = 1e9;
        for (int i = 0; i <= 10; i++)
        {
            int cnt = 0;
            x = a, y = b;
            if (y == 1)
            {

                cnt += 1;
                y += 1;
            }
            y += i;
            cnt += i;
            while (x > 0)
            {
                x = x / y;
                cnt += 1;
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }
    return 0;
}