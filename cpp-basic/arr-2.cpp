#include<iostream>
using namespace std;

// Span of array

int main()
{

     int arr[5];
     for(int i=0;i<5;i++)
     {
          cin>>arr[i];
     }
     int maxi=arr[0];
     int mini=arr[0];

     for(int i=1;i<5;i++)
     {
          if(maxi<arr[i])
               maxi=arr[i];
          if(mini>arr[i])
               mini=arr[i];
     }

     cout<<"span of array "<<maxi-mini;

}
