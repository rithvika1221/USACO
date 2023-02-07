////https://cses.fi/problemset/task/1622
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;



void Perm(string a, int n, int l)
{
	
	if (l == n)
	{

		cout << a << '\n';
	}
	else
	{
		for (int i = l; i <= n; i++)
		{
			swap((a[l]), (a[i]));
			Perm(a, n, l + 1);
			swap((a[l]), (a[i]));

		}

	}


}


int main()
{
	Perm("abc", 2, 0);
}