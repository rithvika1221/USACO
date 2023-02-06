//// https://cses.fi/problemset/task/1623
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//int a[] = { 3,2,7 };
//int dif(int b11, int b22)
//{
//	int temp = 0;
//	temp = max(b11, b22) - min(b11, b22);
//	return temp;
//}
//
//int Solve(int n, int i, int b1, int b2)
//{
//	if (i >= n)
//	{
//
//		return dif(b1, b2);
//	}
//	else
//	{
//		int b1sum = Solve(n, i + 1, b1 + a[i], b2);
//		int b2sum = Solve(n, i + 1, b1, b2 + a[i]);
//		return min(b1sum, b2sum);
//	}
//
//
//}
//
//int main()
//{
//	cout << Solve(3, 0, 0, 0);
//}