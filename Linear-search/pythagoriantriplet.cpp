#include<iostream>
using namespace std;

int main()
{

     int a,b,c;
     cin>>a>>b>>c;
     int maxi=a;
     if(b>maxi)
     {

          maxi=b;
     }
     if(c> maxi)
     {
          maxi=c;

     }
     cout<<maxi;

     if(maxi==a)
     {

          bool flag=((b*b+c*c)==(a*a));
          cout<<flag;
     }
     else if(maxi==b)
     {

          bool flag=((a*a+c*c)==(b*b));
          cout<<flag;
     }
      else
     {

          bool flag=((b*b+a*a)==(c*c));
          cout<<flag;
     }

     return 0;

}
