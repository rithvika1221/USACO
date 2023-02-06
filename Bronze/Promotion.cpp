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


    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0input.txt", "r", stdin);
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0output.txt", "w", stdout);

    int a[4];
    int b[4];
    int gp = 0;
    int sg = 0;
    int bs = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i] >> b[i];
    }

    gp = b[3] - a[3];
    sg = b[2] - (a[2] - (b[3] - a[3]));
    bs = b[1]-(a[1]-sg);

    cout << bs << '\n'
         << sg << '\n'
         << gp;

          

          
}

