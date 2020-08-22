#include<iostream>
#include<algorithm>

using namespace std;

int main()
{

int arr[]={1,4,7,9,12};
int n=sizeof(arr)/sizeof(int);
int key;
cin>>key;
auto ind=find(arr,arr+n,key)-arr;// basically it returns the address of element such (arr+index)
if(ind==n) // or it==l.end()
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
