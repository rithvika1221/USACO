#include <bits/stdc++.h>
using namespace std;

string searchString = "MOO";
int stringCount;
int changeCount = 0;

int makeMoo(string actualString)
{
	//check if string length is less than 3 then return -1
	if (actualString.length() < 3)
	{
		return -1;
	}

	// check if string is MOO return 0
	if (actualString == searchString)
	{
		return 0;
	}

	changeCount = 0;
	while (actualString.length() >= 3)
	{
		bool makeChange = false;

		//if MOO exists then just count the reamining chars that should be the count
		if (actualString.find(searchString) != -1)
		{
			return actualString.find(searchString) + (actualString.length() - (actualString.find(searchString) + 3)) + changeCount;
		}
		else
		{
			if (actualString.length() != 3)
			{

				if (actualString[actualString.length() - 1] == 'M' && actualString[actualString.length() - 2] == 'O' && actualString[actualString.length() - 3] == 'M')
				{
					actualString[actualString.length() - 1] = 'O';
					changeCount++;
					makeChange = true;
				}

				if (makeChange == false && actualString[0] == 'O' && actualString[1] == 'O' && actualString[2] == 'O')
				{
					actualString[0] = 'M';
					changeCount++;
					makeChange = true;
				}

				if (makeChange == false && actualString[0] == 'O' && actualString[1] == 'M')
				{
					makeChange = true;
					changeCount++;
					actualString.erase(0, 1);
				}

				if (makeChange == false && actualString.find(searchString) == -1)
				{
					changeCount++;
					actualString.pop_back();
				}
			}
			else
			{
				if (actualString[actualString.length() - 1] == 'M' && actualString[actualString.length() - 2] == 'O' && actualString[actualString.length() - 3] == 'M')
				{
					actualString[actualString.length() - 1] = 'O';
					changeCount++;
					makeChange = true;
				}

				if (makeChange == false && actualString[0] == 'O' && actualString[1] == 'O')
				{
					actualString[0] = 'M';
					changeCount++;
					makeChange = true;
				}
				else if (makeChange == false && actualString[0] == 'O' && actualString[1] == 'M')
				{
					makeChange = true;
					changeCount++;
					actualString.erase(0, 1);
				}

				if (makeChange == false && actualString.find(searchString) == -1)
				{
					changeCount++;
					actualString.pop_back();
				}
			}

		}
	}
	return -1;

}

int main()
{
	cin >> stringCount;
	for (int i = 0; i < stringCount; i++)
	{
		string a;
		cin >> a;
		int result = makeMoo(a);

		cout << result << '\n';
	}
}
