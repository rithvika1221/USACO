// http://usaco.org/index.php?page=viewproblem2&cpid=1203
// 2022 Feb Problem 1
// Sleeping In Class
#include <iostream>
#include <vector>
#include <cstdio>
#include <math.h>
using namespace std;

void solveTestCase()
{

    int t;
    cin >> t;
    vector<int> a(t);
    int max_a = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        max_a = std::max(max_a, a[i]);
    }

    while (true)
    {

        int cursum = 0;
        int changes = 0;
        bool ok = true;

        for (int i = 0; i < t; i++)
        {
            cursum = cursum + a[i];
            changes++;
            if (cursum == max_a)
            {
                cursum = 0;
                changes--;
            }
            else if (cursum > max_a)
            {
                ok = false;
                break;
            }
        }
        if (ok == true)
        {
            cout << changes << '\n';
            break;
        }

        max_a++;
    }
}

int main()
{
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solveTestCase();
    }
}
