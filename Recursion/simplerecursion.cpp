#include<iostream>
using namespace std;


//pmi principle of mathematical induction
// it is to prove fact
//1=> base case
//2==> asume f(n) is true
//==>prove f(n+1) is true


int fib(int n)
{

     if(n==0)
          return 0;
     if(n==1)
          return 1;

     int smout1=fib(n-1);
     int smout2=fib(n-2);
     //cout<<smout1+smout2<<endl;
     return smout1+smout2;
}
int main()
{
     int n;
     cin>>n;
     cout<<fib(n)<<endl;

     return 0;
}
