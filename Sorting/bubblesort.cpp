#include<iostream>
using namespace std;

bool generic(int a,int b)
{
     cout<<"comparing with "<<a<<" and "<<b<<endl;
return a<b;
}

void bubblesort(int a[],int n,bool (&cmp)(int a,int b))
{


     for(int itr=1;itr<=n-1;itr++)
     {


          for(int j=0;j<=(n-itr-1);j++)
          {

               if(cmp(a[j],a[j+1]))
                    swap(a[j],a[j+1]);
          }
     }
}

/*
void bubblesort(int a[],int n)
{


     for(int itr=1;itr<=n-1;itr++)
     {


          for(int j=0;j<=(n-itr-1);j++)
          {

               if(a[j]>a[j+1])
                    swap(a[j],a[j+1]);
          }
     }
}

*/

int main()
{

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
     cin>>a[i];

//bubblesort(a,n);

bubblesort(a,n,generic);
for(int i=0;i<n;i++)
     cout<<a[i]<<" ";



return 0;
}
