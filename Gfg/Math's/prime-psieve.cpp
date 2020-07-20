#include<iostream>

using namespace std;

void primeseive(int a[],int n)
{


     for(int i=3;i<=n;i+=2)
     {

          a[i]=1;
     }

     for(int i=3;i<=n;i+=2)
     {

          if(a[i]==1)
          {

               for(int j=i*i;j<=n;j=j+i)
               {
                    a[j]=0;
               }
          }


     }
     a[0]=a[1]=0;
     a[2]=1;

}

int main(){

int n;
cin>>n;

int a[n]={0};
primeseive(a,n);

for(int i=0;i<=n;i++)
{
     if(a[i]==1)
     {

          cout<<i<<" ";
     }
}

return 0;
}


/*
int main()
{

int flag=1;
int n;
cin>>n;

for(int i=2;i<n;i++)
{

if(n%i==0)
{
flag=0;
break;
}
}

if(flag==0)
cout<<"not a prime";
else
cout<<"prime number";

return 0;
}
*/
