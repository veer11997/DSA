#include<iostream>

using namespace std;

void bubblesort(int a[],int n)
{

int i,j;
for(i=0;i<n-1;i++)
{

     for(int j=i+1;j<n;j++)
     {

          if(a[j]<a[i])
               swap(a[i],a[j]);
     }
}



}

int main()
{
int a[]={10,7,11,13,6,3,2};
int n=sizeof(a)/sizeof(int);
bubblesort(a,n);
for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
return 0;

}
