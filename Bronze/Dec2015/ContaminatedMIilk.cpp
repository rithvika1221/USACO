//http://usaco.org/index.php?page=viewproblem2&cpid=569
// 2015 Dec Problem 3
// Contaminated Milk

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

int p[1000];
int m1[1000];
int t[1000];
int p2[50];
int t2[50];
int peoplecount = 0;
int maxcount = 0;
int peoplewhodrankspoiledmilk(int milk, int scenarioscount)
{ 
    peoplecount = 0;
    for (int i = 0; i < scenarioscount; i++)
    {
        if (m1[i] == milk)
        {
            peoplecount++;
        }
    }
    return peoplecount;
}

bool drankspoiledmilk(int milk, int person, int scenarioscount, int sickcount)
{
    for (int i = 0; i < scenarioscount; i++)
    {
        if (milk == m1[i] && person == p[i])
        {
            for (int j = 0; j < sickcount; j++)
            {
                if (p2[j] == person)
                {
                    if (t2[j] <= t[i])
                    {
                        return false;
                    }
                    else
                    {
                        return true;
                    }
                }
            }

            return true;
        }
    }
}
int main()
{

    // declare variables and cin values
    int n, m, d, s;
    cin >> n >> m >> d >> s;
    // cin values for person, milk type and time drank
    for (int i = 0; i < d; i++)
    {
        cin >> p[i] >> m1[i] >> t[i];
    }
    // cin vlaues for person and time that they got sick
    for (int i = 0; i < s; i++)
    {
        cin >> p2[i] >> t2[i];
    }
    map<int, int> map;

    // loop through the m types of milk and determine if its spoiled
    for (int i = 1; i <= m; i++)
    {
        bool contaminated = true;
        // loop through people
        for (int j = 1; j <= n; j++)
        {
            if (drankspoiledmilk(i, j, d, s) == false)
            {
                contaminated = false;
                break;
            }
        }
        if (contaminated == true)
        {
            maxcount = peoplewhodrankspoiledmilk(i, d);
            map[i] = maxcount;
        }
    }

    auto maxElement = std::max_element(map.begin(), map.end(),
                                       [](const auto &p1, const auto &p2)
                                       {
                                           return p1.second < p2.second;
                                       });

    std::cout<< maxElement->second << '\n';
}