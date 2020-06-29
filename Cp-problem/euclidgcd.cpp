#include<iostream>
using namespace std;


int gcd(int a,int b)
{


     return b==0?a: gcd(b,a%b);
}
int main()
{
// gcd(a,b) ==> gcd(b,a%b)
// gcd(a,0)==> a

int a,b;
cin>>a>>b;
cout<<"GCD IS ";
cout<<gcd(a,b);
cout<<endl;

// for LCM ==>   gcd*lcm=a*b
cout<<"LCM IS ";
cout<<((a*b)/gcd(a,b))<<endl;

return 0;
}
