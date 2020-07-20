#include<iostream>
#include<cstring>
using namespace std;

//standard template liabrary
//Generic function is to be made ,while using with all situation wahatever container
//linear search
//we want to do linear search for all kind of array so what we do , then generic prog comes into the picture


//template<typename T>  or template<class T>

template<typename T>
int linsearch(T a[],int n,T k)
{
     for(int i=0;i<n;i++)
     {

          if(a[i]==k)
               return i;
     }

     return n;

}


int Slinsearch(int a[],int n,int k)
{
     for(int i=0;i<n;i++)
     {

          if(a[i]==k)
               return i;
     }

     return n;

}


int main()
{
int a[]={1,3,4,7,9,10};
int n=sizeof(a)/sizeof(int);
int k=9;
cout<<Slinsearch(a,n,k)<<endl;
cout<<linsearch(a,n,k)<<endl;
float b[]={1.1,1.2,1.3,1.4};
float p=1.2;
cout<<linsearch(b,4,p)<<endl;
//You can  use it into search for any object or different type of data
return 0;
}
