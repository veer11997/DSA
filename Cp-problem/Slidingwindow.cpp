#include<iostream>

using namespace std;


int main()
{

     int a[]={1,3,4,2,6};
     int n=sizeof(a)/sizeof(int);
     int k;
     cin>>k;
     int sum=0;
     int i=0;
     while(i<k)
     {
          sum=sum+a[i];

          i++;
     }
cout<<sum<<" ";
    for(int i=k;i<=n-1;i++)
     {
          sum=sum+a[i]-a[i-k];
          cout<<sum<<" ";

     }


return 0;
}
