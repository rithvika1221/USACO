//// http://www.usaco.org/index.php?page=viewproblem2&cpid=507
/// 2015 Jan Problem 1
/// Cow Routing

#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<cmath>
#include <set>
#include <map>
#include<vector>

using namespace std;

int main() 
{

    int a;
    int b;
    int n;

    cout << "Enter a, b, c" << "\n";
    cin >> a >> b >> n;

    int result = INT_MAX;
    for (int i = 0; i < n; i++) 
    {
        int p; 
        int s;
        bool found = false;

        cout << "p, s for line " << i <<"\n";
        cin >> p >> s;

        cout << "Enter values for each line"<<"\n";
        for (int j = 0; j < s; j++) 
        {  
            int c;

            found=false;

            cin >> c;
            if (c == a) 
            {
                found = true;
            }
            if (found  && c == b) 
            {
                result = min(result, p);
            }
        }
    }

    
        cout << result << '\n';
    
}

