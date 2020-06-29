#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{

// need to be done complete
int a[]={1,4,3,8,9};
int b[]={5,6,7,12,16};
int num=0,mx;
int i=0;
int ad=sizeof(a)/sizeof(int);
int bd=sizeof(b)/sizeof(int);
int len=ad+bd-2;
vector<pair<int,int>> pt{len};
while(i<ad)
{
pt[i].first=a[i];
pt[i].second=0;
}
while(i<bd)
{

     pt[i].first=b[i];
     pt[i].second=1;
}

for(int i=0;i<len;i++)
{
     cout<<pt[i].first<<" ";
}
return 0;
}
