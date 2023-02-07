//http://usaco.org/index.php?page=viewproblem2&cpid=489
// 2014 Dec Problem 2
// Cow Jog

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

int main()
{


    int n;
    cin >> n;
    int minval = 0;
    int groupcount = 0;

    long long postions[100000];
    long long speed[100000];

    for (int i = 0; i < n; i++)
    {
        cin >> postions[i] >> speed[i];
    }

    minval = speed[0];
    groupcount++;

    for (int i = 1; i < n; i++)
    {
        if (speed[i] > speed[i - 1])
        {
            speed[i] = minval;
        }
        if (speed[i] == speed[i - 1])
        {
            if (postions[i] - postions[i - 1] <= minval)
            {
                speed[i] = minval;
            }
            else
            {
                minval = speed[i];
                groupcount++;
            }
        }
        if (speed[i] < speed[i - 1])
        {
            minval = speed[i];
            groupcount++;
        }
    }

    cout << groupcount;
}