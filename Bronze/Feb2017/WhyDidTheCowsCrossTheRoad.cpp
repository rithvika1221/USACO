// http://www.usaco.org/index.php?page=viewproblem2&cpid=713
// 2017 Feb Problem 1
// Why Did the Cow Cross the Road



#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include <set>
#include <map>
#include<vector>

using namespace std;

int CowQuestioning()
{
	int a;
	int t = 0;

	cin >> a;

	vector< pair < int, int > > n(a);
	for (int i = 0; i < a; i++)
	{ 
		cin >> n[i].first >> n[i].second;
	}
		
	sort(n.begin(), n.end());

	for (int i = 0; i < a; i++)
	{

		if (t > n[i].first) 
		{
			t += n[i].second;
		}
		else
		{

			t = n[i].first + n[i].second;
		}
	}

	return t;
}

int main() 
{
	int a;
	int t = 0;
	cout << "Input N, a positive integer at most 100";
	cin >> a;

	vector <pair <int, int > > n(a);

	for (int i = 0; i < a; i++)
	{

		cin >> n[i].first >> n[i].second;
	}

	sort(n.begin(), n.end());

	for (int i = 0; i < a; i++)
	{

		if (t > n[i].first)
		{
			t += n[i].second;
		}
		else
		{

			t = n[i].first + n[i].second;
		}
	}

	cout <<t;
	
}
