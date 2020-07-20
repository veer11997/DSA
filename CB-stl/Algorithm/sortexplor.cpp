#include<iostream>
#include<algorithm>
using namespace std;


// define comparator function
bool comparator(int a,int b)
{
     cout<<a<<" "<<b<<endl;
     return a>b;
}

void bubble_sort(int a[],int n)
{

     for(int itr=1;itr<=n-1;itr++)
     {
          for(int j=0;j<=(n-itr-1);j++)
          {

               //if(a[j]>a[j+1])
               if(comparator(a[j],a[j+1]))
               {

                    swap(a[j],a[j+1]);
               }
          }
     }
}


void bubble_sort(int a[],int n,bool(&cmp)(int a,int b))
{

     for(int itr=1;itr<=n-1;itr++)
     {
          for(int j=0;j<=(n-itr-1);j++)
          {

               //if(a[j]>a[j+1])
               if(cmp(a[j],a[j+1]))
               {

                    swap(a[j],a[j+1]);
               }
          }
     }
}


int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
          cin>>a[i];
       bubble_sort(a,n);
       bubble_sort(a,n,comparator);
       sort(a,a+n,comparator);// starting point included and last point excluded
// sending function as parameter  not calling function here
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";


     return 0;
}
