#include<iostream>
#include<vector>
using namespace std;

int main()
{

     vector<int> v={1,2,3};
     cout<<v.size();
     cout<<v[1];
int a[]={-2,1,-3,4,-1,2,1,-5,-4};
int n=sizeof(a)/sizeof(int);
int cur=0;
int prev=a[0];

for(int i=0;i<n;i++)
{
cur=cur+a[i];
if(cur>prev)
     prev=cur;
if(cur<0)
     cur=0;
}
cout<<prev;
return 0;
}
