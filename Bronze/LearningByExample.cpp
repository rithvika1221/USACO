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

// bool evenorodd(int temp)
// {
//     if (temp % 2 == 0) {
//     return true;
// } else {
//    return false;
// }

int main()
{
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0input.txt", "r", stdin);
    xfreopen("/Users/anilkumardevisetti/Documents/code/usaco/0output.txt", "w", stdout);

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