#include<iostream>
using namespace std;


int pivot(int a[],int n)
{

     int s=0;
     int e=n-1;
     int mid;

     while(s<=e)
     {
       mid=(s+e)/2;

       if(mid<e && a[mid]>a[mid+1])
              return mid;
        if(mid>s && a[mid]<a[mid-1])
          return mid-1;
       if(a[s]>=a[mid])
          e=mid-1;
       else
          s=mid+1;


     }
     if(s>e)
          return -1;

}

int main()
{
int a[]={6,7,8,9,1,2,3,4,5};
int n=sizeof(a)/sizeof(int);
int ind=pivot(a,n);
if(ind==-1)
     cout<<"not pivot element";
else
cout<<"index is"<<ind<<"and element pivot"<<a[ind];



return 0;
}


