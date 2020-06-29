#include<iostream>
#include<cstring>
using namespace std;


 //modulas operater work with seperatly or combinedly

int gcd(int  a,int b)
{
    if(a==0)
     return b;
    if(b==0)
     return a;
    return gcd(b,a%b);

}

int main()
{
     char a[]="1234567891011121314151617181920212223242526272829";
     long long b=1221;
     int n=strlen(a);

   long long mod=0;
   for(int i=0;i<n;i++)
   {
        mod=(mod*10+(a[i]-'0'))%b;


   }
   cout<<mod<<endl;

   cout<<gcd(mod,b);
return 0;
}
