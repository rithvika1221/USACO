// http://www.usaco.org/index.php?page=viewproblem2&cpid=833
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
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0input.txt", "r", stdin);
    freopen("/Users/anilkumardevisetti/Documents/code/usaco/0output.txt", "w", stdout);

    int n;
    string cow1;
    string cow2;
    int directcount = 0;
    int secondcount = 0;

    map<string, string> relations;

    cin >> n >> cow1 >> cow2;
    string mother;
    string daughter;
    for (int i = 0; i < n; i++)
    {
        cin >> mother >> daughter;
        relations[daughter] = mother;
    }

    string curmother = "";
    string curcow = "";
    string directrelation = "";
    string secondrelation = "";
    bool ancestorfound = false;
    bool directancestorfound = false;

    curmother = relations[cow1];
    directcount++;
    directrelation = "Mother";

    // loop through the direct ancestors
    while (true)
    {
        if (curmother == cow2)
        {
            directancestorfound = true;
            break;
        }
        secondcount = 0;
        curcow = relations[cow2];
        secondcount++;

        // inside loop for aunt and cousion ancestors
        while (true)
        {
            if (curcow == curmother)
            {
                ancestorfound = true;
                break;
            }
            if (curcow != curmother)
            {
                if (relations.find(curcow) == relations.end())
                {
                    break;
                }
                curcow = relations[curcow];
                secondcount++;
            }
        }

        if (ancestorfound == true)
        {
            break;
        }
        else
        {
            if (relations.find(curmother) == relations.end())
            {
                break;
            }
            curmother = relations[curmother];
            directcount++;
            if (directcount == 1)
            {
                directrelation = "mother";
                secondrelation = "sister";
            }
            if (directcount == 2)
            {
                directrelation = "grand-mother";
                secondrelation = "aunt";
            }
            else
            {
                directrelation = "great-" + directrelation;
                secondrelation = "great-" + secondrelation;
            }
        }
    }

    if (ancestorfound == false && directancestorfound == false)
    {
        cout << "NOT RELATED";
    }
    else if (directancestorfound == true)
    {
        cout << cow1 << " is the " << directrelation << " of " << cow2;
    }
    else if (ancestorfound == true)
    {
        if (secondcount == 1)
        {
            cout << cow1 << " is the " << secondrelation << " of " << cow2;
        }
        else
        {
            cout << cow1 << " is the cousin of " << cow2;
        }
    }
}