#include<iostream>
using namespace std;


int pivotsearch(int a[],int s,int e,int key)
{
     if(s>e)
          return  -1;
     //Base case;

     //Rec case
     int mid=(s+e)/2;
     if(a[mid]==key)
     {

          return mid;
     }

     //left part
     if(a[s]<=a[mid])
     {

          if(key>=a[s] && key<=a[mid])
          {

               return pivotsearch(a,s,mid-1,key);
          }
          else
          {

               return pivotsearch(a,mid+1,e,key);
          }
     }

     //mid lies in the second line
     if(key>=a[mid] && key<=a[e])
     {

          return pivotsearch(a,mid+1,e,key);
     }
     return pivotsearch(a,s,mid-1,key);





}

int main()
{
int a[]={6,7,8,9,1,2,3,4,5};
int n=sizeof(a)/sizeof(int);
int key;
cin>>key;
int ind=pivotsearch(a,0,n,key);
if(ind==-1)
     cout<<"not pivot element";
else
cout<<"index is sc "<<ind<<" and element pivot "<<a[ind];



return 0;
}

