#include<iostream>

using namespace std;

int main()
{

int n;
cin>>n;
int height[n];

for(int i=0;i<n;i++)
{
cin>>height[i];
}

int maxi=height[0];
int left[n];
for(int i=0;i<n;i++)
{
     if(maxi<height[i]){
          maxi=height[i];
          left[i]=maxi;
     }
     else
          left[i]=maxi;

}
maxi=height[n-1];
int right[n];
for(int i=n-1;i>=0;i--)
{
     if(maxi<height[i]){
          maxi=height[i];
          right[i]=maxi;
     }
     else
          right[i]=maxi;

}
int sum=0;
for(int i=0;i<n;i++)
{
     sum=sum+min(left[i],right[i])-height[i];

}
for(int i=0;i<n;i++)
     cout<<left[i]<<" ";

     cout<<endl;

for(int i=0;i<n;i++)
     cout<<right[i]<<" ";

     cout<<endl;

     cout<<"total water "<<sum<<endl;
return 0;
}
