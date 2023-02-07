#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

// iteration


int fact(int n)
{
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		f = i * f;
	}
	return f;
}

int refact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}

int refib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return refib(n - 1) + refib(n - 2);
	}
}




