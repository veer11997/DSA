#include<iostream>

using namespace std;

int binarysearch(int a[],int n,int point)
{

     int s=0;
     int l=n-1;
     while(s<=l)
     {

          int m=(s+l)/2;
          if(a[m]==point)
               return m;
          else if(point>a[m])
               s=m+1;
          else
               l=m-1;

     }

     return -1;
}

int main()
{

     int a[]={1,3,5,10,12,15,17};
     int n=sizeof(a)/sizeof(int);
     int point;
     cin>>point;
     int ind=binarysearch(a,n,point);
     if(ind==-1)
          cout<<"point did not found";
     else
          cout<<"point found at index "<<ind<<" which is "<<a[ind];


     return 0;

}
