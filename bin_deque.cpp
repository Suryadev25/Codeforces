#include <bits/stdc++.h>
using namespace std;
const int size = 10e4 + 10;

int minRemoval(int *a, int n, int s)
{
    int currentSum = 0, deletion = 0;
    int rightZero = 0, leftZero = 0;
    for (int i = 0; i < n; i++)
        currentSum += a[i];

    if (currentSum == s)
        return 0;
    if (currentSum < s)
        return -1;

    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (a[i] && leftZero <= rightZero)
        {
            deletion += leftZero + 1;
            currentSum--;
            j += rightZero;
            leftZero = rightZero = 0;
            i++;
            if (currentSum == s)
                return deletion;
        }
        else if (a[j] && rightZero < leftZero)
        {
            deletion += rightZero + 1;
            currentSum--;
            j--;
            i -= leftZero;
            leftZero = rightZero = 0;
            if (currentSum == s)
                return deletion;
        }
        else
        {
            if (a[i] == 0)
            {
                leftZero++;
                i++;
            }
            if (a[j] == 0)
            {
                rightZero++;
                j--;
            }
        }
    }

    return -1;
}

int main()
{
    int n, s, t, a[size];

    cin >> t;

    while (t--)
    {
        cin >> n >> s;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << minRemoval(a, n, s)<<endl;
    }
}