// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     int n;
//     cin >> n;
//     if (n == 0)
//     {
//         cout << "1" << endl;
//     }
//     for (int i = 1; i <= n; i += 4)
//     {
//         if (n == i)
//         {
//             cout << "8";
//         }
//     }
//     for (int i = 2; i <= n; i += 4)
//     {
//         if (n == i)
//         {
//             cout << "4";
//         }
//     }
//     for (int i = 3; i <= n; i += 4)
//     {
//         if (n == i)
//         {
//             cout << "2";
//         }
//     }
//     for (int i = 4; i <= n; i += 4)
//     {
//         if (n == i)
//         {
//             cout << "6";
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[] = {6,
                 8,
                 4,
                 2};
    int n;
    cin >> n;
    cout << arr[n % 4] << endl;
    return 0;
}