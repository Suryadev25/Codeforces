// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, count = 0;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     sort(a, a + n);
//     for (int i = 0; i < n; i+=2)
//     {
//         if (a[i] < a[i + 1])
//         {
//             count += (a[i + 1] - a[i]);
//             // count += count;
//         }
//         // cout << a[i] << " ";
//     }
//     cout << count << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    cout << "n : " << endl;
    int n;
    cin >> n;
    cout << "Elements " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
    return 0;
}