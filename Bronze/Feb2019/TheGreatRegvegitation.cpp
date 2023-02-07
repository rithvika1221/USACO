// http://www.usaco.org/index.php?page=viewproblem2&cpid=916
// 2019 Feb Problem 2
// The Great Revigitation
#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include <string>
#include <set>
#include <iterator>

using namespace std;

int main()
{

    map<int, set<int> > pastors;
    map<int, int> seeds;

    int n;
    int m;

    int p1;
    int p2;

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> p1 >> p2;
        pastors[p1].insert(p2);
        pastors[p2].insert(p1);
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            set<int>::iterator it = pastors[i].begin();
            bool exist = false;
            while (it != pastors[i].end())
            {

                if (seeds[*it] == j)
                {
                    exist = true;
                    break;
                }
                it++;
            }
            if (exist == false)
            {
                seeds[i] = j;
                break;
            }
        }
    }

    map<int, int>::iterator itr;
    for (itr = seeds.begin(); itr != seeds.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
}

 
