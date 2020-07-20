#include<iostream>
#include<algorithm>

using namespace std;

int main()
{

int arr[]={1,4,7,9,12};
int n=sizeof(arr)/sizeof(int);
int key;
cin>>key;
auto ind=find(arr,arr+n,key)-arr;
if(ind==n)
{
     cout<<"element not present:";
}
else
{
     cout<<"element present at index "<<ind;
}
// index is that
return 0;
}
