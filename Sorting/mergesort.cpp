#include<iostream>
using namespace std;


void merg(int *a,int s,int e)
{

     int mid=(s+e)/2;
     int i=s;
     int j=mid+1;
     int k=s;

     int temp[100];
     while(i<=mid && j<=e)
     {

          if(a[i]<a[j])
          {
               temp[k++]=a[i++];
          }
          else
          {

               temp[k++]=a[j++];
          }
     }

     while(i<=mid)
     {

          temp[k++]=a[i++];
     }


     while(j<=e)
     {

          temp[k++]=a[j++];
     }

     for(int i=s;i<=e;i++)
     {

          a[i]=temp[i];
     }

}

void mergesort(int a[],int s,int e)
{

     if(s>=e)
          return;

     int mid=(s+e)/2;
     //1 -->>Divide
     mergesort(a,s,mid);
     mergesort(a,mid+1,e);

     merg(a,s,e);

}
int main()
{


     //1=> Divide
     //2=> Sort
     //3=> Merge

     int arr[]={5,6,1,2,4,0};
     int n=sizeof(arr)/sizeof(int);

     mergesort(arr,0,n-1);

     for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";

     return 0;
}
