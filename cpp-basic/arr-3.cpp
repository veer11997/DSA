#include<iostream>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     int num;
     cin>>num;
     int ind=-1;

     for(int i=0;i<n;i++)
     {
          if(arr[i]==num)
          {
               ind=i;
               break;
          }
     }

     cout<<" Element present at index "<<ind;
}
