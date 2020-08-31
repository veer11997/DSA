#include<iostream>
using namespace std;

//ANy base to Decimal
int getvalueinbase(int n,int b)
{
     int rv=0;
     int p=1;
     while(n>0)
     {
          int dig=n%10;
          n=n/10;

          rv=rv+dig*p;
          p=p*b;


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
