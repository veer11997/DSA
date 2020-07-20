#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
     cin>>arr[i];
}
int presum[n];
presum[0]=arr[0];
for(int j=1;j<n;j++)
{

     presum[j]=presum[j-1]+arr[j];
}

for(int i=0;i<n;i++)
     cout<<presum[i]<<" ";


return 0;
}
