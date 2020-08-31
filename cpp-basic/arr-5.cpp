#include<iostream>
using namespace std;

// Sum of two Arrays
int main()
{
     int n1;
     cin>>n1;
     int a1[n1];
     for(int i=0;i<n1;i++)
          cin>>a1[i];
     int n2;
     cin>>n2;
     int a2[n2];
     for(int i=0;i<n2;i++)
          cin>>a2[i];
     int sum[n1];
     int c=0;
     int i=n1-1;
     int j=n2-1;
     int k=n1-1;

     while(k>=0)
     {
          int d=c;
          if(i>=0)
          {
               d=d+a1[i];
          }
          if(j>=0)
          {
               d=d+a2[j];
          }
          c=d/10;
          d=d%10;
          sum[k]=d;
          i--;
          j--;
          k--;

     }
     if(c!=0)
          cout<<c;
     for(int x : sum)
          cout<<x;
}
