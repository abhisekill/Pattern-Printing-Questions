/* Pattern- 
                *
                * *
                * * *
                * * * *
                * * * * *
                * * * *
                * * *
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

    for (int row = 1; row < 2 * n; row++)
    {

        int columnInEachRow = row > n ? 2 * n - row : row;
        for (int col = 1; col <= columnInEachRow; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}