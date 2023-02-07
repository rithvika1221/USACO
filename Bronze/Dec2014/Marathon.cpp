// http://www.usaco.org/index.php?page=viewproblem2&cpid=487#
// 2014 Dec Problem 1
// Marathon

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
    int x[100000];
    int y[100000];
    int totaldist = 0;
    int skipdist = 0;
    int noskipdist= 0;
    int  maxskip=0;
    int mindist=0;


    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

     for(int i = 1; i < n; i++) 
     {
      totaldist = totaldist + abs(x[i] - x[i-1]) + abs(y[i] - y[i-1]);
     }

     for(int i= 1; i<n-1; i++)
     {
        noskipdist= abs(x[i]-x[i-1])+abs(y[i]-y[i-1])+abs(x[i+1]-x[i])+abs(y[i+1]-y[i]);
        skipdist= abs(x[i+1]-x[i-1])+abs(y[i+1]-x[i-1]);
        maxskip= max(maxskip, noskipdist-skipdist);

     }

     mindist= totaldist-maxskip;
     cout<< mindist;

}


