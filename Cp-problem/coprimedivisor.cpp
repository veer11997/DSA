#include<iostream>
using namespace std;

int gcd(int a,int b)
{

     if(b==0)
          return a;
     return gcd(b,a%b);
}

int main()
{

int a,b;
cin>>a>>b;
/*
int x=2;
while(x<a)
{
     if(a%x==0)
     {
          if(gcd(x,b)==1)
          {

               cout<<x;
               break;
          }
     }
     x++;
}

*/

while(gcd(a,b)!=1)
{

     a=a/gcd(a,b);
}

cout<<a<<endl;
return 0;
}
