// http://www.usaco.org/index.php?page=viewproblem2&cpid=1179
// 2022 Jan Problem 1
// Herdle
#include <iostream>
#include <vector>
#include <cstdio>
#include <map>

using namespace std;

char correct[9];
char guess[9];

// empty map container
// map<int, int> gquiz1;
map<char, int> counta;

int main()
{
    int green = 0;
    int yellow = 0;
    int temp = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> correct[i];
        counta[correct[i]] = counta[correct[i]] + 1;
    }

    for (int i = 0; i < 9; i++)
    {
        cin >> guess[i];
    }

    for (int i = 0; i < 9; i++)
    {
        
    }

    for (int i = 0; i < 9; i++)
    {
        if (correct[i] == guess[i])
        {
            green++;
            counta[correct[i]] = counta[correct[i]] - 1;
        }
        else if (counta.count(guess[i]) && counta[guess[i]] > 0)
        {
            counta[guess[i]] = counta[guess[i]] - 1;
            yellow++;
        }
    }
    cout << green << '\n'
         << yellow;
}
