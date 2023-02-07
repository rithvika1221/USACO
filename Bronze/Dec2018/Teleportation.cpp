// http://usaco.org/index.php?page=viewproblem2&cpid=807
// 2018 Feb Problem 1
// Teleportation

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
    
    int a, b, x, y;
    cin>> a>> b>> x>> y;
    int mintotal=0;
    mintotal= abs(a-b);
    mintotal= min(mintotal, abs(a-x)+abs(b-y));
    mintotal= min(mintotal, abs(a-y)+abs(b-x));

    cout<<mintotal;


}
