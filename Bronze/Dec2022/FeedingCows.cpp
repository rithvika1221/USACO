// http://usaco.org/index.php?page=viewproblem2&cpid=1252
// 2022 Decemeber Problem 2
// Feeding The Cows

#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main()
{

    int t;
    cin >> t;

    // loop through each testcase
    for (int m = 0; m < t; m++)
    {
        int n, k;
        cin >> n >> k;
        char arr[n];
        char ans[n];
        int count = 0;
        int lp = 0;
        int rp = 0;
        int h = -1;
        int g = -1;
        
        // read the input array
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            ans[j] = '.';
        }

        // loop through the array
        for (int i = 0; i < n; i++)
        {

            if (arr[i] == 'H')
            {

                if (i - k >= 0)
                {
                    lp = i - k;
                }
                else
                {
                    lp = 0;
                }
                if (i+k <= n - 1)
                {
                    rp = i + k;
                }
                else
                {
                    rp = n - 1;
                }

                if(h>=lp && h<=rp)
                {}
                else
                {
                     int index = i + k;
                    if (index >= n)
                    {
                        index = n - 1;
                    }

                    if (ans[index] != 'G')
                    {
                        ans[index] = 'H';
                        h = index;
                        count ++;
                    }
                    else if (ans[index] == 'G')
                    {
                        ans[index - 1] = 'H';
                        h = index - 1;
                        count++;
                    }
                }
            }

            if (arr[i] == 'G')
            {

                if (i - k >= 0)
                {
                    lp = i - k;
                }
                else
                {
                    lp = 0;
                }
                if (i+k <= n - 1)
                {
                    rp = i + k;
                }
                else
                {
                    rp = n - 1;
                }

                if(g>=lp && g<=rp)
                {}
                else
                {
                     int index = i + k;
                    if (index >= n)
                    {
                        index = n - 1;
                    }

                    if (ans[index] != 'H')
                    {
                        ans[index] = 'G';
                        g = index;
                        count ++;
                    }
                    else if (ans[index] == 'H')
                    {
                        ans[index - 1] = 'G';
                        g = index - 1;
                        count++;
                    }
                }
            }

          
            
        }

        cout << count << '\n' ;
        for (int k = 0; k < n; k++)
        {
            cout << ans[k];
        }
        cout << '\n';
    }
}
