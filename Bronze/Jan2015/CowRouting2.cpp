// http://usaco.org/index.php?page=viewproblem2&cpid=508
// 2015 Jan Problem 2
// Cow Routing 2

#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <cmath>
#include <set>
#include <map>
#include <vector>

using namespace std;

int a;
int b;
int n;
int p;
int s;
int A[500][10000];
vector<pair<int, int>> myVector;
int result = INT_MAX;
int secondresult = INT_MAX;

int findB(int tempa)
{
    int found = false;
    int foundB=false;
    for (int i = 0; i < n; i++)
    {

        found = false;
      

        for (int j = 0; j < myVector[i].second; j++)
        {

            if (A[i][j] == tempa)
            {
                found = true;
            }

            if (found == true && A[i][j] == b)
            {

                foundB=true;
                secondresult = min(result, myVector[i].first);
            }
        }
    }
    if(foundB==true)
    {
        return secondresult;
    }
    else
    {
        return -1;
    }
}

int main()
{

   
    cin >> a >> b >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> p >> s;

        myVector.push_back(make_pair(p, s));

        for (int j = 0; j < s; j++)
        {
            cin >> A[i][j];
        }
    }

    int found = false;
    for (int i = 0; i < n; i++)
    {

        found = false;

        for (int j = 0; j < myVector[i].second; j++)
        {

            if (A[i][j] == a)
            {
                found = true;
            }
            else if (found == true && A[i][j] == b)
            {
                result = min(result, myVector[i].first);
            }
            else if (found == true && A[i][j] != a && A[i][j] != b) 
                {
                    int resultb= findB(A[i][j]);
                    if(resultb!=-1)
                    {
                        result=min(result,resultb+myVector[i].first);
                    }
                }
        }
    }

    cout << result;
}