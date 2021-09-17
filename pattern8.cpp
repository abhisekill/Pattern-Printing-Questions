/* Pattern-
           * 
         * * * 
       * * * * * 
     * * * * * * *
    * * * * * * * *
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        int totalCol = 2 * row - 1;
        int totalSpace = n - row;

        for (int space = 1; space <= totalSpace; space++)
        {
            cout << "  ";
        }
        for (int col = 1; col <= totalCol; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}