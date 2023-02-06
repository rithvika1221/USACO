// http://usaco.org/index.php?page=viewproblem2&cpid=567
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

    int a;
    int b;
    int c;
    int d;
    int total=0;

    cin >> a >> b >> c >> d;

    total = max(max(b, d) - min(a, c), 0);



    cout << total;


}