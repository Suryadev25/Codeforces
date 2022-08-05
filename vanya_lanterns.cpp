// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     ll n, l;
//     cin >> n >> l;
//     ll a[n];
//     int count = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         if (a[i] == 0)
//         {
//             count = 1;
//         }
//     }
//     sort(a, a + n);
//     double max3 = 0;
//     double max2 = a[0];
//     double max1 = 0;
//     double max4 = l - a[n - 1];

//     for (ll i = 0; i < n - 1; ++i)
//     {

//         if (a[i + 1] - a[i] > max3)
//         {
//             max3 = a[i + 1] - a[i];
//         }
//     }
//     max1 = max3 / 2;
//     if (count)
//     {

//         if (max4 < max1)
//         {
//             cout << setprecision(10) << fixed << max1 << endl;
//         }
//         else
//         {
//             cout << setprecision(10) << fixed << max4 << endl;
//         }
//     }
//     else
//     {

//         if (max4 > max1 && max4 > max2)
//         {

//             cout << setprecision(10) << fixed << max4 << endl;
//         }
//         else
//         {
//             cout << setprecision(10) << fixed << max(max1, max2) << endl;
//         }
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int n,l,m,i,a[1005];
main(){
	cin>>n>>l;
	for(i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	m=max(a[0],l-a[n-1])*2;
	for(i=1;i<n;i++) m=max(m,a[i]-a[i-1]);
	printf("%lf",m/2.0);
}