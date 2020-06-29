#include<iostream>

using namespace std;

// while iterating get the cummilative sum of till that index



void prime_seive(int *p)
{


     for(long long i=3;i<=1000;i+=2)
     {

          p[i]=1;
     }
     for(long long i=3;i<=1000;i+=2)
     {
          if(p[i]==1)
          {

          for(long long j=i*i;j<=1000;j=j+i)
               p[j]=0;


          }

     }
     p[2]=0;
     p[1]=p[0]=1;
}

int main()
{

     int n;
     cin>>n;
     int  p[10005]={0};
     prime_seive(p);
    for(int i=0;i<n;i++)
    {
         if(p[i]==1)
          cout<<i<<" ";
    }


     int csum[10005]={0};
     for(int i=1;i<=n;i++)
     {
    csum[i]=csum[i-1]+p[i];
//inserting in each index till the count of  prime
     }

     int q;
     cin>>q;

//O(N) +q

     while(q--)
     {


          int a,b;
          cin>>a>>b;
          cout<<csum[b]-csum[a-1]<<endl;
     }


return 0;
}


/*

     int csum[10005]={0};
     for(int i=1;i<=n;i++)
     {
    csum[i]=csum[i-1]+p[i];

     }

     int q;
     cin>>q;

     while(q--)
     {


          int a,b;
          cin>>a>>b;
          cout<<csum[b]-csum[a-1]<<endl;
     }


     */
