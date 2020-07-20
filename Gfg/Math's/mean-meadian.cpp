#include<iostream>
using namespace std;


int main()
{
   int n;
   cin>>n;
   int sum=0;
   int arr[n];
   int i;

   for(i=0;i<n;i++)
   {
     cin>>arr[i];
   sum=sum+arr[i];

   }

   cout<<"mean of that "<<sum/n;
   cout<<endl;
   cout<<"meadian is ";
   if(n%2==0)
   {

        cout<<arr[n/2];

   }
   else
     cout<<(arr[n/2]+arr[n/2+1])/2;

return 0;
}
