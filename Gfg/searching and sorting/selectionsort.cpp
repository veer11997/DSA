#include<iostream>

using namespace std;

void selectionsort(int a[],int n)
{

int i,j,mi,temp;
for(i=0;i<n-1;i++)
{
     mi=i;
     for(int j=i+1;j<n;j++)
     {

          if(a[j]<a[mi])
               mi=j;
          if(mi!=i)
          {
               swap(a[i],a[mi]);
          }
     }
}



}

int main()
{
int a[]={10,7,11,13,6,3,2};
int n=sizeof(a)/sizeof(int);
selectionsort(a,n);
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
return 0;

}
