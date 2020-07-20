#include<iostream>
using namespace std;

  int binary(int a[],int s,int l,int x)
  {
       if(s<=l){
          int mid= (s+l)/2;

       if(a[mid]==x)
          return mid;
       else if(a[mid]<x)
          return binary(a,mid+1,l,x);
       else
          return binary(a,s,mid-1,x);
       }

       return -1;


  }

int binsearch(int a[],int n,int x)
{
int s=0;
int l=n-1;
int mid;
while(s<=l)
{
mid=(s+l)/2;

if(a[mid]==x)
  return mid;
else if(a[mid]<x)
  s=mid+1;
else
  l=mid-1;


}

return -1;

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
int x;
cin>>x;
int ind=binsearch(arr,n,x);
cout<<ind<<" "<<arr[ind];


cout<<endl;

int ind2=binary(arr,0,n-1,x);
cout<<ind2<<" "<<arr[ind2];
return 0;
}
