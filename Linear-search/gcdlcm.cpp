#include<iostream>

using namespace std;

int main()
{
int n1,n2;
int on1,on2;
cin>>n1>>n2;
on1=n1;
on2=n2;

while(n1%n2!=0)
{
     int rem=n1%n2;
     n1=n2;
     n2=rem;

}

int gcd=n2;
int lcm=(on1*on2)/gcd;
cout<<gcd<<" "<<lcm;


}
