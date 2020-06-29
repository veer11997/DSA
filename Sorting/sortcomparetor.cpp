#include<iostream>
#include<algorithm>
using namespace std;



//  passing function name as perimeter to sort  function
bool generic(int a,int b)
{
     cout<<"comparing with "<<a<<" and "<<b<<endl;
return a>b;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
     cin>>arr[i];

     sort(arr,arr+n,generic);
for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";



return 0;
}
