//// 2015 Feb Problem 1
//// Shell Game
//// http://www.usaco.org/index.php?page=viewproblem2&cpid=526
//
//
//
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string s = "whatthemomooofun";
//	string t ="moo";
//	string cen ="";
//
//	
//	for (int i = 0; i < s.size(); i++)
//	{
//		cen += s[i];
//
//		// check if cen contains t or not an if yes, remove it
//		if (cen.size() > t.size() - 1 && cen.substr(cen.size() - t.size(), 3) == t)
//		{
//			// removing the t from cen 
//			cen = cen.substr(0,cen.size()-t.size());
//		}
//
//	}
//	
//	cout << cen;
//
//
//}