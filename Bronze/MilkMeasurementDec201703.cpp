//// 2017 Dec Problem 3
//// Milk Measurment
//// http://www.usaco.org/index.php?page=viewproblem2&cpid=568&lang=en
//
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	vector<int> B;
//	vector<int> E;
//	vector<int> M;
//	cin >> n;
//	string maxstring = "";
//	string newmax = "";
//	int count = 0;
//
//	for (int i = 0; i < 100; i++)
//	{
//		B.push_back(7);
//		E.push_back(7);
//		M.push_back(7);
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		int day;
//		string name;
//		unsigned int change;
//
//		cin >> day;
//		cin >> name;
//		cin >> change;
//
//		if (name == "mildred")
//		{
//			M[day] += change;
//		}
//		else if (name == "elsie")
//		{
//			E[day] += change;
//		}
//		if (name == "bessie")
//		{
//			B[day] += change;
//		}
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		newmax = "";
//		if (B[i] > max(E[i], M[i]))
//		{
//			newmax = newmax + "bessie";
//		}
//		if (E[i] > max(B[i], M[i]))
//		{
//			newmax = newmax + "elsie";
//		}
//		if (M[i] > max(E[i], B[i]))
//		{
//			newmax = newmax + "midred";
//		}
//		if (newmax != maxstring)
//		{
//			count++;
//		}
//
//		newmax = maxstring;
//
//	}
//
//	cout << count;
//}
//
//
//#include<iostream>
//using namespace std;
//

