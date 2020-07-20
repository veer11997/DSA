#include<iostream>

using namespace std;


int gcd(int a,int b)
{

if(a==0)
return b;
if(b==0)
return a;


return gcd(b,a%b);


}
int main()
{


int a,b;
cin>>a>>b;

int ans=gcd(a,b);
cout<<" Gcd Is : "<<ans<<endl;

cout<<"lcm is "<<(a*b)/ans;

return 0;
}
