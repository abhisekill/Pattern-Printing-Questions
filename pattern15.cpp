/*
         *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        for (int col = 1; col <= 2 * n - 1; col++)
        {
            int k = row > n ? 2 * n - row : row;
            if (k == 1)
            {
                if (col == n - k + 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            else
            {
                if (col == n - k + 1 || col == n + k - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}