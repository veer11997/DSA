#include<iostream>
using namespace std;

int main()
{

int A;
cin>>A:
int n=A;
if(A==0)
     return 1;
if(A<0)
     return 0;
int res=0;
while(n)
{

     res=res*10+n%10;
     n=n/10;

}
if(A==res)
     return 1;
else return 0;


}
