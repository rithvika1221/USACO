#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include <set>
#include <map>
#include<vector>

using namespace std;

void TwoSumLoops()
{
	vector<int> array{ 2, 7, 5, 1 };
	int target = 8;

	for (int i = 0; i < array.size(); i++)
	{
		for (int j = 0; j < array.size() - 1; j++)
		{
			if (array[i] + array[j] == target)
			{
				cout << array[i] << '\n' << array[j];
			}
		}
	}
}

void TwoSumSort()
{
	vector<int> a{ 2, 7, 5, 1 };
	int target = 7;

	sort(a.begin(), a.end());
	int i = 0;
	int j = a.size()-1;

	
	while (i < j)
	{
		if (a[i] + a[j] == target)
		{
			cout << "\n" << a[i] << "--" << a[j];
			break;
		}
		
		if ((a[i] + a[j]) > target) 
		{
			j= j - 1;
		}

		if (a[i] + a[j] < target)
		{
			i = i + 1;
		}
	}



}

int main()
{
	TwoSumSort();

}







