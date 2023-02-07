// http://www.usaco.org/index.php?page=viewproblem2&cpid=785
// 2018 Jan Problem 3
// Out of Place

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int cows[100];
int coount =0;

void swap(int i, int j)
{
    int temp;
    temp = cows[i];
   cows[i]=cows[j];
   cows[j]= temp;
}
int main()
{
    
    int n;
    cin >> n;



    for (int i = 0; i < n; i++)
    {
        cin >> cows[i];
    }

    int i = n - 1;
    while (i >= 0)
    {
        if (cows[i] < cows[i - 1])
        {
            int j = i - 1;
            while (cows[j] == cows[j - 1])
            {
                j--;
            }
            swap(i, j);
            coount++;
            i=j;
        }
        else 
        {
            i--;
        }
    }

    cout << coount;
}