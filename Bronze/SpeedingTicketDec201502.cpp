//// 2015 Dec Problem 2
//// Speeding Ticket
//// http://www.usaco.org/index.php?page=viewproblem2&cpid=568&lang=en
//
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include <vector>
//
//
//using namespace std;
//
//void speedingTicket()
//{
//	int n;
//	int m;
//	vector<int> road;
//	vector<int> bessie;
//	int highlimit = 0;
//
//	// take in the values of m and n
//
//	cout << "Enter number of segments of m and n";
//	cin >> n;
//	cin >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		int n1;
//		int m1;
//
//		cout << "Enter number the road values";
//
//		cin >> n1;
//		cin >> m1;
//
//		for (int j = 0; j < n1; j++)
//		{
//			road.push_back(m1);
//		}
//	}
//
//
//	for (int i = 0; i < m; i++)
//	{
//		int n1;
//		int m1;
//
//		cout << "Enter number the Bessie's values";
//
//		cin >> n1;
//		cin >> m1;
//
//		for (int j = 0; j < n1; j++)
//		{
//			bessie.push_back(m1);
//		}
//	}
//
//	for (int i = 0; i < 100; i++)
//	{
//		if (highlimit < bessie[i] - road[i])
//		{
//			highlimit = bessie[i] - road[i];
//		}
//	}
//
//	cout << highlimit;
//}
//
////int main() 
////{
////
////}