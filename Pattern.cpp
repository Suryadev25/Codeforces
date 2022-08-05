#include <bits/stdc++.h>
#define ll long long
using namespace std;

/*How to approach
1-> No. of lines = No. of rows = No. of times outer loop will run;
2-> Identify for every row no, how many columns are there 
Or Types of elements in column
3-> What do you need to print?
4-> Try to find the formula relating rows and columns , by writng them
in a sheet 
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    // Pattern -1
    // for (int row = 1; row <= n; row++)
    // {
    // for every row , run the column
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }
    // When one row is printed , we need to add a newline
    //     cout << endl;
    // }

    //Pattern -2
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //Pattern 3
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n - row + 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Pattern 4
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // Pattern 5
    // for (int row = 1; row <= 2 * n - 1; row++)
    // {
    //     if (row > n)
    //     {
    //         for (int col = 1; col <= (2 * n - 1) - row + 1; col++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    //     else
    //     {
    //         for (int col = 1; col <= row; col++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // }

    //Pattern 6 (*)
    for (int row = 1; row <= 2 * n -1; row++)
    {
        int totalcol = row > n ? 2 * n - row : row;
        int spaces = n - totalcol;
        for (int s = 0; s < spaces; s++)
        {
            cout << " ";
        }
        for (int col = 1; col <= totalcol; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    //Pattern 7
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int i = 1; i <= n - row; i++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout << col << " ";
    //     }
    //     for (int col = 2; col <= row; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }
    return 0;
}
