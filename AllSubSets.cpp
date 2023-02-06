  // Simple Program to find the All Subsets of a set.

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> subset;

void print()
{
    for (int i = 0; i < subset.size(); i++)
    {
        cout << subset[i] << " ";
    }
    cout << "\n";
}


// Simple recursive code to generate the subsets
void allSubsets(int a[], int n, int i)
{
    if (i >= n)
    {
        print();
        return;
    }
    else
    {
        subset.push_back(a[i]);
        allSubsets(a, n, i + 1);
        subset.pop_back();
        allSubsets(a, n, i + 1);
    }
}

int main()
{
    int a[] = {1, 2, 3};
    int n = 3;
    int ind = 0;
    allSubsets(a, n, ind);
}
