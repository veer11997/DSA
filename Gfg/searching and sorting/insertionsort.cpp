#include<iostream>

using namespace std;

void insertionsort(int a[],int n)
{

int i,j,temp;
for(i=0;i<n-1;i++)
{
     for(int j=i+1;j>0;j--)
     {

          if(a[j]<a[j-1])
          {
               swap(a[j],a[j-1]);
          }
     }
}



}

int main()
{
int a[]={10,7,11,13,6,3,2};
int n=sizeof(a)/sizeof(int);
insertionsort(a,n);
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
return 0;

}
