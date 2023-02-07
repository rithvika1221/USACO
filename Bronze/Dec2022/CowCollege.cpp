//http://www.usaco.org/index.php?page=viewproblem2&cpid=1251
// 2022 Dec Problem 1
// Cow College

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


    long long n;
    long long fees[100000];

    long long feepercow=0;
    long long maxtotal=0;
    cin >> n;
    long long totalfee=0;
    long long count=0; 
    for (int i =0; i<n; i++)
    {
        cin >> fees[i];
    }
    for(int i=0; i<n; i++)
    {
        
        for(int j=0; j<n; j++)
        {
            if(fees[i] <= fees[j])
            {
                count++;
            }
        }
        feepercow=fees[i];
        totalfee = fees[i]*count;
        maxtotal= max(totalfee, maxtotal);

    }

    cout<< maxtotal << '\n' << feepercow;
}
