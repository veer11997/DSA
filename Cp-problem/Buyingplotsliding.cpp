#include<iostream>

using namespace std;


int main()
{

     int a[]={1,4,2,5,6};
     int k;
     cin>>k;
     int n=sizeof(a)/sizeof(int);
     int sum=0;
     for(int i=0,j=0;j<=n; )
     {

          if(sum==k)
          {
               cout<<j<<" and "<<i;
               break;

          }
          if(sum<k)
          {
               j++;
               sum=sum+a[j];


          }
          if(sum>k){
                    sum=sum-a[i];
               i++;
          }
     }
return 0;
}
