#include<iostream>
#include<cmath>
using namespace std;
int isprime(int num)
{

     for(int i=2;i<num;i++)
     {

          if(num%i==0)
          {
               return 1;
          }
     }
     return 0;
}
int main()
{
int a,m;
cin>>a>>m;
int ans=isprime(m);
if(ans==0)
{
     if(pow(a,m-1)==1)
          cout<<"modular inverse";

}

return 0;
}
