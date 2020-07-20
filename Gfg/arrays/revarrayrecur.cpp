#include<iostream>

using namespace std;

void reversearray(int arr[],int start,int en)
{
     if(start>=en)
          return;

     int temp=0;
     temp=arr[en];
     arr[en]=arr[start];
     arr[start]=temp;

     reversearray(arr,start+1,en-1);

}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
     cin>>arr[i];
}
int start=0;
int en=n-1;
reversearray(arr,start,en);
for(int i=0;i<n;i++)
{
     cout<<arr[i]<<" ";
}

return 0;
}
