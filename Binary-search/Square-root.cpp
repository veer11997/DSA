#include<iostream>

using namespace std;

float squareroot(int n,int p)
{
     int s=0;
     int e=n;
     int mid;
     float ans;
     while(s<=e)
     {

          mid=(s+e)/2;
          if(mid*mid==n)
          {
               ans=mid;
               break;

          }
          if(mid*mid<n)
          {
               s=mid+1;
               ans=mid;
          }
          else
          {

               e=mid-1;
          }

     }

     float inc=0.1;
     for(int i=0;i<p;i++)
     {

          while(ans*ans<=n)
          {

               ans=ans+inc;
          }
          ans=ans-inc;
          inc=inc/10;
     }

     return ans;
}

int main()
{
     int n;
     cin>>n;
     int p;
     cin>>p;
     float num=squareroot(n,p);
     cout<<"Square root of integer "<<num;


     return 0;

}
