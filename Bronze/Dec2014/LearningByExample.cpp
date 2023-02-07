// http://usaco.org/index.php?page=viewproblem2&cpid=490
// 2014 Dec Problem 4
// Learning by Example

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


    int n, a, b;
    cin >> n >> a >> b;

    int weight[n];
    string spots[n];
    std::map<int, std::string> cmap;
    int sCount = 0;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> spots[i];
        cin >> weight[i];

        cmap[weight[i]] = spots[i];
    }

    int s = sizeof(weight) / sizeof(weight[0]);

    sort(weight, weight + s);

    for (int i = 0; i <= n - 2; i++)
    {

        if (cmap[weight[i]] == cmap[weight[i + 1]] && cmap[weight[i]] == "S")
        {

            temp = weight[i + 1] - weight[i];
            sCount = sCount + temp;
            if (i == 0)
            {
                sCount++;
            }
        }
        if (cmap[weight[i]] != cmap[weight[i + 1]])
        {
            temp = ((weight[i + 1] - weight[i]) / 2);
            sCount = temp + 1;
        }
    }

    cout << sCount;
}