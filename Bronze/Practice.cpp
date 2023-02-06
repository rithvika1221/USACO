//#include<iostream>
//#include<vector>
//using namespace std;
//
//void Numbertil100()
//{
//	int number;
//
//	for (number = 1; number <= 100; number++)
//	{
//		cout << number << " ";
//		if (number % 10 == 0)
//		{
//			cout << '\n';
//		}
//	}
//}
//
//void MultiplicationChart()
//{
//	int n;
//	for (int i = 1; i <= 10; i++)
//	{
//		for (int j = 1; j <= 20; j++)
//		{
//			n = i * j;
//			cout << n << " ";
//		}
//		cout << '\n';
//	}
//}
//
//void Addentsof14()
//{
//	vector<int> a;
//	int count =0;
//	a.push_back(2);
//	a.push_back(3);
//	a.push_back(4);
//	a.push_back(5);
//	a.push_back(6);
//	a.push_back(9);
//	a.push_back(10);
//	a.push_back(11);
//
//	
//	for (int i = 0; i < a.size(); i++)
//	{
//		for (int j = i + 1; j < a.size(); j++)
//		{
//			if (a[i] + a[j] == 14)
//			{
//				count++;
//			}
//		}
//	}
//
//	cout << count;
//
//}
//
//void Repeatedchars()
//{
//	string a = "aabcedc";
//	
//
//	for (int i = 0; i < a.size(); i++)
//	{
//		for (int j = i + 1; j < a.size(); j++)
//		{
//			if (a[i] == a[j])
//			{
//				cout << a[i] << '\n';
//			}
//		}
//	}
//
//;
//
//}
//
////int main()
////{
////	Repeatedchars();
////}