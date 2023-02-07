// http://usaco.org/index.php?page=viewproblem2&cpid=1155
// 2021 Dec Problem 1
//Lonely Photo

#include <iostream>
#include <vector>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    int h = 0;
    int g = 0;
    int throwawaycount = 0;
    for (int i = 3; i < n; i++)
    {
        for (int j = 0; j <n-i+1; j++)
        {
            string r = s.substr(j, i);
            g=0;
            h=0;
            for (int m = 0; m < r.length(); m++)
            {
                if (r[m] == 'G')
                {
                    g++;
                }
                else if (r[m] == 'H')
                {
                    h++;
                }
            }
            if (g == 1 || h == 1)
            {
                throwawaycount++;
            }
        }
    }

    cout << throwawaycount;
}
