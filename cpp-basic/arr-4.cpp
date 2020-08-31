#include<iostream>
using namespace std;


// Bar Chart
int main()
{

     int n;
     cin>>n;
     int arr[n];

     for(int i=0;i<n;i++)
          cin>>arr[i];

     int maxi=arr[0];
     for(int i=1;i<n;i++)
     {
          if(arr[i]>maxi)
               maxi=arr[i];

     }

     for(int f=maxi;f>=1;f--)
     {
          for(int i=0;i<n;i++)
          {
               if(arr[i]>=f)
               {
                    cout<<"*\t";
               }
               else
               {
                    cout<<"\t";
               }
          }
          cout<<endl;
     }
}
