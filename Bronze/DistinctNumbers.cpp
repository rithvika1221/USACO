//// https://cses.fi/problemset/task/1621
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<math.h>
//#include <set>
//#include <map>
//#include<vector>
//using namespace std;
//
//void distinctNumbersSort()
//{
//    // find distinct numbers using sort
//    // no extra memory
//    vector<int> array{ 3, 4, 5 , 2 , 3 , 6 ,4 };
//    sort(array.begin(), array.end());
//    int count = 0;
//    for (int i = 0; i < array.size() - 1; i++)
//    {
//        if (array[i] != array[i + 1])
//        {
//
//            count++;
//        }
//    }
//    if (array[array.size() - 2] != array[array.size() - 1])
//    {
//        count++;
//    }
//    cout << count;
//}
//
//void distinctNumbers()
//{
//    // no sorting
//    // use extra memory
//
//    vector<int> array{ 3, 3,3,3, 4, 5 , 2 , 3 , 6 ,4 };
//    int count = 0;
//    set<int> a;
//    for (int i = 0; i < array.size(); i++)
//    {
//        a.insert(array[i]);
//    }
//    
//    cout<< a.size();
//
//    
//}
//
//
//int main()
//{
//    distinctNumbers();
//  
//}
//
