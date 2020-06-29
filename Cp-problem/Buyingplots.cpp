#include<iostream>
using namespace std;

int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
          cin>>arr[i];
     int prefix[n];

     int sum=0;
     for(int i=0;i<n;i++)
     {
          sum=sum+arr[i];
          prefix[i]=sum;

     }



     int reqsum=0;
     cin>>reqsum;

     for(int i=0;i<n;i++)
     {

          for(int j=1;j<n;j++)
          {

     if((prefix[j]-prefix[i])==reqsum)
     {
          cout<<"sum req "<<j<<" index "<<i<<endl;
          break;
     }


          }
     }

return 0;
}
