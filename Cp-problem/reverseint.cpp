#include<iostream>
using namespace std;

int  main()
{
int n;
cin>>n;
int num=0,res;
if(n>0)
{
     while(n>0)
     {
          res=n%10;
          n=n/10;
          num=num*10+res;
          if(num>INT_MAX||num<INT_MIN) return 0;

     }
     return num;
}
else
{
n=-n;
while(n>0)
     {
          res=n%10;
          n=n/10;
          num=num*10+res;
          if(num>INT_MAX||num<INT_MIN) return 0;
     }
     cout<<(-num);

}

return 0;
}
