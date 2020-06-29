#include<iostream>
//Lower_bound problem
using namespace std;

int firstocc(int a[],int n,int key)
{
     int s=0;
     int e=n-1;
     int mid;
     int ans=-1;
     while(s<=e)
     {
          mid=(s+e)/2;
          if(a[mid]==key){
               ans=mid;
               e=mid-1;
          }
          else if(a[mid]>key)
               e=mid-1;
          else
               s=mid+1;

     }
     return ans;
}

int main()
{

     int a[]={1,2,2,2,2,4,4};
     int n=sizeof(a)/sizeof(int);
     int point;
     cin>>point;
     int ind=firstocc(a,n,point);
     if(ind==-1)
          cout<<"point did not found";
     else
          cout<<"first occuerance of point  "<<point<<" is at index "<<ind<<" which is"<<a[ind];


     return 0;

}
