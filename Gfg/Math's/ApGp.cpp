#include<iostream>
#include<cmath>
using namespace std;


int main()
{
int a=2;
int n=4;
int d=2;
// find the nth term of arithmetic progression 2 5 8 11 14

int sn=(n*((2*a)+(n-1)*d))/2;
cout<<sn<<endl;
int an=a+(n-1)*d;
cout<<an<<endl;
int r=2;
int gn=a*pow(r,(n-1));
cout<<gn<<endl;

int gsum=(a*(pow(r,n)-1))/(r-1);
cout<<gsum<<endl;


return 0;
}
