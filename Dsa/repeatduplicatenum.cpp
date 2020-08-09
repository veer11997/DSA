#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


o(N)+o(N)=> o(2n)
hashing



int main()
{
     //sorting method
     // O(nlogN)+O(N)
     int arr[]={4,3,6,2,1,1};
     //1 1 2 3 4 6
     int n=sizeof(arr)/sizeof(int);
     sort(arr,arr+n);

     for(int i=0;i<n;i++)
     {
          if(arr[i]==(i+1))
               continue;
          else if(arr[i]<i+1))
          {
               cout<<i+1<<" Repeating";

          }

     }
}
