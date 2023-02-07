// http://www.usaco.org/index.php?page=viewproblem2&cpid=831
// 2018 US Open Contest Problem 1
// Team Tic Tac Toe
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include <set>
#include <map>
#include<vector>
using namespace std;

int count1 = 0;
int count2 = 0;
char a[3][3];
set<char> n;

void row()
{
   for (int i = 0; i < 3; i++)
   {
       n.clear();
     
       for (int j = 0; j < 3; j++)
       {
           n.insert(a[i][j]);
       }
       if (n.size() == 1)
       {
           count1 = count1 + 1;
       }
       else if (n.size() == 2)
       {
           count2 = count2 + 1;
       }
   }
}

void column()
{
   for (int i= 0; i < 3; i++)
   {
       n.clear();

       for (int j = 0; j < 3; j++)
       {
 
           n.insert(a[j][i]);
       }
       if (n.size() == 1)
       {
           count1 = count1 + 1;
       }
       else if (n.size() == 2)
       {
           count2 = count2 + 1;
       }
   }
}


void dia1()
{
   n.clear();
   for (int i = 0; i < 3; i++)
   {
      

       n.insert(a[i][i]);
   }
   if (n.size() == 1)
   {
       count1 = count1 + 1;
   }
   else if (n.size() == 2)
   {
       count2 = count2 + 1;
   }
}

void dia2()
{
   n.clear();
   for (int i = 0; i < 3; i++)
   {
       n.insert(a[i][2-i]);
    
   }
   if (n.size() == 1)
   {
       count1 = count1 + 1;
   }
   else if (n.size() == 2)
   {
       count2 = count2 + 1;
   }
}


int main()
{
   
   for (int i = 0; i < 3; i++) 
   {
       for (int j = 0; j < 3; j++) 
       {
           cin >> a[i][j];
       }
   }
   row(); 
   column();
   dia1();
   dia2();

   cout << count1 << '\n' << count2;



   


}