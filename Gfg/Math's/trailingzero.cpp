#include<iostream>
using namespace std;

int main()
{
int num;
cin>>num;
int p=5;
int ans=0;
while(num/p>0)
{
     ans=ans+num/p;
     p=p*5;
}
cout<<"total zeroes are "<<ans;

return 0;
}
