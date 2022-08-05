#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll a, b, c;
    cin >> a >> b >> c;
    ll ans1 = a + b + c;
    ll ans2 = (a + b) * c;
    ll ans3 = a + b * c;
    ll ans4 = a * b + c;
    ll ans5 = a * (b + c);
    ll ans6 = a * b * c;
    // ll ans1 = a + b + c;
    ll sum1 = max(ans1, ans2);
    ll sum2 = max(ans3, ans4);
    ll sum3 = max(ans5, ans6);

    ll x = max(sum1, sum2);
    cout << max(x, sum3) << endl;
    return 0;
}