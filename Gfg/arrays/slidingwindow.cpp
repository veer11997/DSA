#include<iostream>

using namespace std;

int main()
{

int n;
cin>>n;
int k;
cin>>k;

int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int sum=0;
for(int i=0;i<k;i++)
{
sum=sum+arr[i];
}


for(int j=k;j<n;j++)
{
cout<<sum<<" ";

sum=sum-arr[j-k]+arr[j];
}
cout<<sum;


return 0;
}
