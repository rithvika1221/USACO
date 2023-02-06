//http://usaco.org/index.php?page=viewproblem2&cpid=1083
#include <iostream>
#include <vector>
#include <cstdio>
#include <map>
#include <string>

using namespace std;

int main()
{

    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0input.txt", "r", stdin);
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0output.txt", "w", stdout);

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