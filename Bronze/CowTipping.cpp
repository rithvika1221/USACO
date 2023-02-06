// Link the program http://www.usaco.org/index.php?page=viewproblem2&cpid=689

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int grid[10][10];
int n;
int countt = 0;

void flip(int x, int y)
{
    // loop from the end of the grid
    for (int i = x; i >= 0; i--)
    {
        for (int j = y; j >= 0; j--)
        {
            // compare and flip the cows
            if (grid[i][j] == 1)
            {
                grid[i][j] = 0;
            }
            else if (grid[i][j] == 0)
            {
                grid[i][j] = 1;
            }
        }
    }
}

int main()
{
    // set the freopen to the input and output files
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0input.txt", "r", stdin);
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0output.txt", "w", stdout);

    // read n

    cin >> n;
    // take in the values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    // find the last 1 in the grid and call the flip function
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (grid[i][j] == 1)
            {
                flip(i, j);
                countt++;
            }
        }
    }

    cout << countt;
}
