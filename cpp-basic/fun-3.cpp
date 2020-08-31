#include<iostream>
using namespace std;

// Decimal to any base
int getvalueinbase(int n,int b)
{
     int rv=0;
     int p=1;
     while(n>0)
     {
          int dig=n%b;
          n=n/b;

          rv=rv+dig*p;
          p=p*10;


     }
     return rv;

}


int main()
{

     int n;
     cin>>n;
     int b;
     cin>>b;
     int dn=getvalueinbase(n,b);
     cout<<dn;

}
