#include<iostream>
#include<algorithm>
using namespace std;

/*

int main()
{

     int a[]={1,2,3,4};
     //1,2,3,4,5,6,7,9
     int n=sizeof(a)/sizeof(int);
     sort(a,a+n);
     for(int i=2;i<n;i=i+2)
     {
               swap(a[i-1],a[i]);
     }

     for(int x : a)
          cout<<x<<" ";
     return 0;
}

*/

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

