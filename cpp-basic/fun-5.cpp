#include<iostream>
using namespace std;

//ANy base to Decimal
int anybasedecimal(int n,int b)
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
//Decimal to any base
int decimalanybase(int n,int b)
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
     int b1;
     cin>>b1;
     int dn=anybasedecimal(n,b);
     int ans=decimalanybase(dn,b1);
     cout<<ans;

}
