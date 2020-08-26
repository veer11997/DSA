#include<iostream>

using namespace std;

int main()
{
     int temp,n;
     cin>>n;
     temp=n;

     int k;
     cin>>k;
     int nod=0;
     while(temp>0)
     {

          temp=temp/10;
          nod++;

     }
     k=k%nod;
     if(k<0)
     {
          k=k+nod;
     }
     int div=1;
     int mul=1;

     for(int i=1;i<=nod;i++)
     {
          if(i<=k)
          {
               div=div*10;
          }
          else
          {
               mul=mul*10;
          }
     }

     int q= n/div;
     int r= n%div;

     int rota=r*mul+q;
     cout<<rota<<endl;


}
