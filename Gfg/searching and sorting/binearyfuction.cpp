#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,6,7,8};
int n=sizeof(a)/sizeof(int);
auto it=binary_search(a,a+n,10);
cout<<it<<endl;
if(binary_search(a,a+n,5)!=0)
     cout<<"5 is present";
else
     cout<<"not present";

return 0;
}
