#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++)
{

cin>>a[i];
}

int x;
cin>>x;
for(int j=0;j<n;j++)
{

if(a[j]==x)
{
cout<<j<<" "<<a[j];
break;
}
}


return 0;
}
