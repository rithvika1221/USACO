#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int binarySearch(int arr[], int key)
{
    int getArrayLength = 10;
    int s=0;
    int e=getArrayLength-1;
    int mid=0;
    
    while(s<e)
    {
        mid= (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    return -1;
}

int main()
{
   int array[]= {1,2,3,4,5,6,7,8,9,10};
   int key= 6;
   int answer = binarySearch(array,key);
   cout << answer;
}