#include <bits/stdc++.h>
#define ll long long
#define int int64_t
using namespace std;
int ar[(int)1e6 + 10];
set<int> T_prime;
void t_primes()
{
    T_prime.insert(4);
    for (int i = 3; i < (int)1e6 + 1; i += 2) // 3
    {
        if (ar[i] == 0)
        {
            T_prime.insert(i*i);            // 9
            for (int j = i; j <= 1e6; j += i) // 3,6,9,12,15,18... (not prime)
            {
                ar[j] = 1; // flag = 1
            }
        }
    }
}
// Sieve erathosthenes

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    t_primes();
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (T_prime.find(x) != T_prime.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
