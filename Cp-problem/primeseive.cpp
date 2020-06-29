#include<iostream>
using namespace std;


// Naive approach to check number is prime or not
bool isprime(int n)
{
     if(n==1)
          return false;
     if(n==2)
          return true;
     for(int i=2;i*i<n;i++)
     {

          if(n%i==0)
               return false;
     }
     return true;


}

// Sieve based approach
void prime_seive(int *p)//(int p[])
{
     // first all odd number will prime assume
     for(long long  i=3;i<=10000;i+=2)
     {

          p[i]=1;
     }

     for(long long i=3;i<=10000;i+=2)
     {
          if(p[i]==1)
          {

               for(long long j=i*i;j<=10000;j=j+i)
               {

                    p[j]=0;
               }
          }


     }


     p[2]=1;
     p[0]=p[1]=0;
          //All even number can skip
          // O(log log N) from (n2)

}

int main()
{

int n;
cin>>n;
//cout<<isprime(n);


int p[10005]={0};
prime_seive(p);

for(int i=0;i<=n;i++)
{

     if(p[i]==1)
     {

          cout<<i<<" ";
     }
}


return 0;
}
