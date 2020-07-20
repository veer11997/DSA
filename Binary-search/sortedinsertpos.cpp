#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

int a[]={1,3,5,6};
int n=sizeof(a)/sizeof(int);
int b;
cin>>b;
auto it=lower_bound(a,a+n,b)-a;
if(a[it]==b)
     cout<<a[it];
else
     cout<<it;
return 0;
}
