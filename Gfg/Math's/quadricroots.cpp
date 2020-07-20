#include<iostream>
#include<cmath>
using namespace std;

int main()
{

int a,b,c;
cin>>a>>b>>c;


if(b*b>4*a*c)
cout<<"roots are real";
else if(b*b<4*a*c)
cout<<"roots are complex";
else
cout<<"roots are real but both are same";
int d=sqrt(b*b-4*a*c);
cout<<d<<endl;
cout<<"\n and roots are: ";
int  x1=(-b+sqrt(d))/(2*a);
int x2=(-b-sqrt(d))/(2*a);
cout<<x1<<" "<<x2;
cout<<endl;


return 0;
}
