#include<iostream>
using namespace std;
int main()
{

int a[]={1,2,4,5,7,10};
int n=sizeof(a)/sizeof(int);
sort(a,a+n);
auto it = lower_bound(a,a+n,7)-a;
cout<<a[it];


return 0;
}
