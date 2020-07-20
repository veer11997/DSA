#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int fact(int f)
{
     int fp=1;
     while(f>0)
     {
          fp=fp*f;
          f--;

     }
     return fp;
}
int main()
{
     /*
vector<int> v={2,3,1,2,5};
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++)
     {
          if(v[i]==i+1 && v[i+1]==v[i])
               cout<<"repeated num"<<i+1<<endl;
          if(v[i]!=i+1)
               cout<<"missing num"<<i+1<<endl;
     }
for(int x : v)
     cout<<x<<" ";
     */




     vector<int> v={2,3,1,2,5};
     int n=v.size();
     int isum=(n*(n+1))/2;
     int iprod=fact(n);
     int rsum=0,rprod=1;
     for(int i=0;i<n;i++)
     {
          rsum=rsum+v[i];
          rprod=rprod*v[i];

     }
     int x,y;

return 0;
}
