#include<iostream>

using namespace std;

int fact(int num)
{
int f=1;
if(num==0)
 return 1;

return f=num*fact(num-1);
}


int main()
{

int num;
cin>>num;
int ans=fact(num);
cout<<"Factorial is "<<ans;
return 0;
}
