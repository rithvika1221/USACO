// http://usaco.org/index.php?page=viewproblem2&cpid=1275
// 2023 Jan Problem 1
// Leaders

#include <bits/stdc++.h>

using namespace std;


int n;
char cowList[100001];
int cowEndList[100001];
map<int, int> gcmaplist;
map<int, int> hcmaplist;
map<int, int> glmaplist;
map<int, int> hlmaplist;
map<int, int> leaderlist;
int gcount = 0;
int hcount = 0;
int g2count = 0;
int h2count = 0;
int gLeadercount = 0;
int hLeadercount = 0;


int main()
{

	// read n
	cin >> n;
	
	// read each cow and also make the cowlist
	for (int i = 1; i <= n; i++)
	{
		cin >> cowList[i];

		if (cowList[i] == 'H')
		{
			hcount++;
			hcmaplist.insert({ i, hcount });
			gcmaplist.insert({ i, gcount });
		}

		if (cowList[i] == 'G')
		{
			gcount++;
			gcmaplist.insert({ i, gcount });
			hcmaplist.insert({ i, hcount });
		}
		
	}

	// read all the cow end list
	for (int i = 1; i <= n; i++)
	{
		cin >> cowEndList[i];
	}

	// take four map, for each cow check if it is a leader then add the cow to the leader list and increase the cow count
	for (int i = 1; i <= n; i++)
	{
		if (cowList[i] == 'H')
		{
			h2count = hcmaplist[cowEndList[i]] - hcmaplist[i] + 1;
		}
		else
		{
			h2count = hcmaplist[cowEndList[i]] - hcmaplist[i];
		}

		if (cowList[i] == 'G')
		{
			g2count = gcmaplist[cowEndList[i]] - gcmaplist[i] + 1;
		}
		else
		{
			g2count = gcmaplist[cowEndList[i]] - gcmaplist[i];
		}

		if (cowList[i] == 'H')
		{
			if (h2count == hcount)
			{
				leaderlist.insert({ i, 1 });
				hLeadercount++;
			}
			else if (g2count > 0)
			{
				leaderlist.insert({ i, 2 });
			}
			else
			{
				leaderlist.insert({ i, 0 });
			}
		}

		if (cowList[i] == 'G')
		{

			if (g2count == gcount)
			{
				leaderlist.insert({ i, 1 });
				gLeadercount++;
			}
			else if (h2count > 0)
			{
				leaderlist.insert({ i, 2 });
			}
			else
			{
				leaderlist.insert({ i, 0 });
			}
		}

		glmaplist.insert({i, gLeadercount});
		hlmaplist.insert({ i, hLeadercount });
	}


	for (int i = 1; i <= n; i++)
	{

		if (leaderlist[i] == 2)
		{
			if (cowList[i] == 'G')
			{
				if (hlmaplist[cowEndList[i]] > hlmaplist[i])
				{
					gLeadercount++;
				}
			}
			if (cowList[i] == 'H')
			{
				if (glmaplist[cowEndList[i]] > glmaplist[i])
				{
					hLeadercount++;
				}
			}
		}
	}

	cout << gLeadercount * hLeadercount;

}

