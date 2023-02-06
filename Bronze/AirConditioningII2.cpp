#include <bits/stdc++.h>

using namespace std;


int N, M;
vector<int> chart(101);
int minimumPrize = 2147483647;
vector<int> svector(21);
vector<int> tvector(21);
vector<int> cvector(21);
vector<int> avector(11);
vector<int> bvector(11);
vector<int> pvector(11);
vector<int> mvector(11);

//function  to check if all values are 0 or not
bool checkVal(vector<int> chartcopy)
{
	for (int i = 1; i <= 100; i++)
	{
		if (chartcopy[i] != 0)
		{
			return false;
		}
	}
	return true;

}

void prizeRecursive(vector<int> chartVector, int index, int prize)
{
	 //base case minmum prize found
	if (checkVal(chartVector))
	{
		minimumPrize = min(minimumPrize, prize);
		return;
	}

	 //base  case reached the end of all refrigirators
	if (index == M + 1)
	{
		return;
	}

	// dont Include the refrigirator and recurse
	vector<int> newVectorNonInclude(chartVector);
	prizeRecursive(newVectorNonInclude, index + 1, prize);

	 // Include the refrigirator and recurse
	vector<int> newVectorInclude(chartVector);
	for (int j = avector[index]; j <= bvector[index]; j++)
	{
		if (newVectorInclude[j] - pvector[index] < 0)
		{
			newVectorInclude[j] = 0;
		}
		else
		{
			newVectorInclude[j] = newVectorInclude[j] - pvector[index];
		}
	}
	prizeRecursive(newVectorInclude, index + 1, prize+mvector[index]);
}


int main()
{

	for (int i = 0; i <= 100; i++)
	{
		chart[i] = 0;
	}

	// read all the values
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		cin >> svector[i] >> tvector[i] >> cvector[i];
	}

	for (int i = 1; i <= M; i++)
	{
		cin >> avector[i] >> bvector[i] >> pvector[i] >> mvector[i];
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = svector[i]; j <= tvector[i]; j++)
		{
			chart[j] = cvector[i];
		}
	}
	
	// call the function recursively
	prizeRecursive(chart, 1, 0);
	cout << minimumPrize;
}
