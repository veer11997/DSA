#include<iostream>

using namespace std;

int main()
{


int arr[]={1,3,4,2,7,8};
int n=sizeof(arr)/sizeof(int);

for(int i=0;i<n;i+=2)
{
if(i>0 && arr[i-1]>arr[i])
     swap(arr[i-1],arr[i]);

if(i<=n-2 && arr[i+1]>arr[i])
     swap(arr[i+1],arr[i]);


}


for(int i=0;i<n;i++)
     cout<<arr[i]<<" "<<endl;



return 0;
}
