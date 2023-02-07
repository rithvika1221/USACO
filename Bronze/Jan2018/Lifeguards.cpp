//// 2018 Jan Problem 2
//// Lifeguards
//// http://www.usaco.org/index.php?page=viewproblem2&cpid=784

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
using namespace std;

int k;
int cnt = 0;
int s[1001];
int e[1001];
int t[1001];
int ans =0;
void add(int b, int l, int v)
{
	for (int i = b; i < l; i++)
	{
		t[i] += v;
	}

}

int main()
{
	// cin number of shifts
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		// cin number of shifts
		cin >> s[i] >> e[i];
		// add 1 to array for each hour
		add(s[i], e[i], 1);
	}
	// go through each shift 
	for (int i = 0; i < k; i++)
	{
		cnt = 0;
		// usbtract 1 from each shift removed
		add(s[i], e[i], -1);
		// count number of hours covered
		for (int j = 0; j < 1001; j++)
		{
		
			if (t[j] > 0)
			{
				cnt++;
			}
		}
		// compare all k hours and get max
		ans = max(ans, cnt);
		add(s[i], e[i], 1);
	}

	cout << ans; 
	
}