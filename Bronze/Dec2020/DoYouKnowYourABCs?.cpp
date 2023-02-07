//http://usaco.org/index.php?page=viewproblem2&cpid=1059
// 2020 Dec Problem 1
// Do You Know Your ABCs?

#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0input.txt", "r", stdin);
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0output.txt", "w", stdout);
    int arr[7];
    int a=0;
    int b=0;
    int c=0;
    int sum=0;
    for (int i=0; i<7;i++)
    {
        cin>> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    int j=0;
    a = arr[j];
    b= arr[j+1];
    sum=arr[6];
    c= arr[6]-a-b;

    cout << a << '\n' << b << '\n' << c;


}