// 2015 Dec Problem 2
// Speeding Ticket
// http://www.usaco.org/index.php?page=viewproblem2&cpid=568&lang=en

#include<iostream>
#include<algorithm>
#include<math.h>
#include<string>
#include <vector>

using namespace std;

int main()
{
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0input.txt", "r", stdin);
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0output.txt", "w", stdout);

    int n;
    int m;
    vector<int> road;
    vector<int> bessie;
    int maxspeed=0;

    cin >> n >> m;
    for (int i=0; i<n; i++)
    {


        
        int road1;
        int road2;

        cin>> road1>> road2;

        for(int j=0; j<road1; j++)
        {
            road.push_back(road2);
        }


    }

    for (int i=0; i<m; i++)
    {
        int bessie1=0;
        int bessie2=0;

        cin>> bessie1>> bessie2;

        for(int j=0; j < bessie1; j++)
        {
            bessie.push_back(bessie2);
        }

    }

    for(int i=0; i< 100; i++)
    {
        
       maxspeed= max(abs(road[i]-bessie[i]), maxspeed);
    }

    cout<< "MaxSpeed: "<< maxspeed << "\n";

}
