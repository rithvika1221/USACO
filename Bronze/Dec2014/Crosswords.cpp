//http://usaco.org/index.php?page=viewproblem2&cpid=488
// 2014 Dec Problem 2
// Crosswords

#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include <string>
#include <set>
#include <iterator>
#include <utility>
#include <math.h>

using namespace std;

char a[50][50];

bool horizantalTrue(int i, int j,int m)
{
    if (a[i][j] == '#')
    {
        return false;
    }
     else if (a[i][j - 1] == '#' || a[i][j - 1] == '!')
    {
        return false;
    }
    else if (a[i][j + 1] == '#' || a[i][j + 1] == '!' || a[i][j + 2] == '#' || a[i][j + 2] == '!' || j + 3 > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool verticalTrue(int i, int j,int n)
{
    if (a[i][j] == '#')
    {
        return false;
    }
    else if (a[i - 1][j] == '#' || a[i - 1][j] == '!' )
    {
        return false;
    }
    else if (a[i + 1][j] == '#' || a[i + 1][j] == '!' || a[i + 2][j] == '#' || a[i + 2][j] == '!' || i + 3 > n)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0input.txt", "r", stdin);
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0output.txt", "w", stdout);

    int n, m;
    cin >> n;
    cin >> m;
    int count=0;
    set<pair<int,int>> pairs;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool horizontal = false;
            if (horizantalTrue(i,j,m) == true)
            {
                pairs.insert({i+1,j+1});
                count++;
                horizontal = true;
                a[i][j] = '!';
                a[i][j + 1] = '!';
                a[i][j + 2] = '!';
            }
            if (verticalTrue(i,j,n) == true && horizontal == false)
            {
                pairs.insert({i+1,j+1});
                count++;
                a[i][j] = '!';
                a[i + 1][j] = '!';
                a[i + 2][j] = '!';
            }
        }
    }

    cout<<count<<'\n';

      for (const auto& pair : pairs)
       {
       cout << pair.first<<' '<< pair.second << '\n';
    }

  

giooo0  `
}