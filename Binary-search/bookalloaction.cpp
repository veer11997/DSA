#include<iostream>
using namespace std;


bool isvalid(int book[],int n,int k,int ans)
{


int student=1;
long long int  curpage=0;
for(int i=0;i<n;i++)
{

if(curpage+book[i]>ans){
     curpage=book[i];
     student++;
     if(student>k)
     return false;
}
else
{

     curpage=curpage+book[i];
}

}
return true;
}


int bookallocate(int a[],int n,int k)
{

int s=0,e=0;
int totalpage=0;

for(int i=0;i<n;i++)
{
totalpage=totalpage+a[i];
s=max(s,a[i]);
}
e=totalpage;
int finalans=s;
while(s<=e)
{
int mid=(s+e)/2;
if(isvalid(a,n,k,mid))
{
finalans=mid;
e=mid-1;
}
else
{

s=mid+1;

}


}
return finalans;
}

int main()
{

int a[]={12,34,67,90};
int k;
cin>>k;
int n=sizeof(a)/sizeof(int);
int res=bookallocate(a,n,k);
cout<<res;

}
