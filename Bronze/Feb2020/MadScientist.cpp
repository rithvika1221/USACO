// http://www.usaco.org/index.php?page=viewproblem2&cpid=1012
// 2020 Feb Problem 2
// Mad Scientist

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    string a;
    string b;

    cin >> n;
    cin >> a >> b;

    int s = 0;
    int e = 0;
    int counttt = 0;

    for (int i = 0; i < n; i++)
    {
        if ((a[e] == b[e]))
        {
            if (s < e)
            {
                // for (int j = s; j < e; j++)
                // {
                //     if (b[j] == 'h')
                //     {
                //         b[j] = 'g';
                //     }
                //     else if (b[j] == 'g')
                //     {
                //         b[j] = 'h';
                //     }
                // }
                counttt++;
            }
            s = e + 1;
            e = s;
        }
        else if (a[e] != b[e])
        {
            e++;
        }
    }
    cout << counttt;
}
