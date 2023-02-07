//// 2019 Dec Problem 1
//// Cow Gymnastics
//// http://www.usaco.org/index.php?page=viewproblem2&cpid=963

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int k;
int n;
int temp;
int results[10][20];

int findPair(int a, int b)
{
	int count = 0;
	for (int i = 0; i < k; i++)
	{
		int apos = 0;
		int bpos = 0;
		for (int j = 0; j < n; j++)
		{
			if (results[i][j] == a)
			{
				apos = j; 
			}
			if (results[i][j] == b)
			{
				bpos = j;
			}
		}

		if (apos < bpos)
		{
			count++;
		}

	}
	return count;
}
int main()
{
	int answer = 0;
	int temp;

	// Input K and N
	cin >> k >> n;

	// read the values in for each session and N values
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			results[i][j] = temp;
			
		}
	}

	//
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			int result = findPair(i, j);
			if (result == k)
			{
				answer++;
			}

		}
	}

	cout << answer;

}