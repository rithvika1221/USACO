//http://usaco.org/index.php?page=viewproblem2&cpid=1083
// 2021 Jan Problem 1
//Uddered but not Herd

#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include <string>

using namespace std;

int main()
{

    string a;
    string alph;

    cin>> alph >> a;
    int j=0;
    int count;

    int i=0;
    while(true)
    {
        if (alph[i] == a[j])
        {
            j++;
        }
        if (i<25)
        {
            i++;
        }
        else if (i==25)
        {
            count++;
            i=0;
        }
        if (j==a.length())
        {
            count++;
            break;
            
        }
        
    }

    cout<<count;
}
