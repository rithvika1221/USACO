// 2019 Jan Problem 1
// Shell Game
// http://www.usaco.org/index.php?page=viewproblem2&cpid=891



#include<iostream>
#include<algorithm>

using namespace std;

int n, a[100], b[100], c[100];

int main()
{
	int high;
	int count = 0;

	cout << "Enter the number of iterations";
	cin >> n;

	// lopp n times and get the input
	cout << "Enter the number of steps";
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}


	// for each location check the max guess count
	for (int i = 1; i <= 3; i++)
	{
		int loc = i;
		count = 0;

		// for each step verify the guess/answer
		for (int i = 0; i <= n; i++)
		{
			if (a[i] == loc)
			{
				loc = b[i];
			}
			else if (b[i] == loc)
			{
				loc = a[i];
			}
			if (c[i] == loc)
			{
				count++;
			}
				
		}

		high = max(count, high);
	}
	
	cout << "The max number of points is " << high;
}