#include<iostream>
using namespace std;


int main()
{
int n;
cin>>n;
int i=0;
int *p= new int [n];
while(i<n)
{
     cin>>p[i];
     i++;
}

int k;
cin>>k;
int ans=p[0];
//2 2 1 3 1
for(int i=0;i<n;i++)
{
     int co=0;
     int num=p[i];
     for(int j=0;j<n;j++)
     {
          if(num==p[j])
               co++;

     }
     if(co>=k && ans>=num){
     ans=num;
     }

}
cout<<ans;

return 0;
}
