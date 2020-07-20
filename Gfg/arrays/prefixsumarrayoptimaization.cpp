#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
int arr[n]={0};
int m;
cin>>m;

while(m>0)
{
     int a=0,b=0;
     cin>>a>>b;
     arr[a-1]=arr[a-1]+100;
     arr[b+1-1]=arr[b+1-1]-100;

     m--;
}
int presum[n];
presum[0]=arr[0];
for(int j=1;j<n;j++)
{
     presum[j]=presum[j-1]+arr[j];

}

int large=presum[0];
for(int x : presum)
{

     if(x>large)
          large=x;
     cout<<x<<" ";

}

cout<<endl<<large;

return 0;
}
