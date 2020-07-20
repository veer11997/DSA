#include<iostream>
#include<vector>
using namespace std;

int main()
{

vector<int> v={1,2,3,3,5};
int n=v.size();
int vsum=(n*(n+1))/2;
int ssum=(n*(n+1)*(2*n+1))/6;
cout<<vsum<<" "<<ssum<<endl;

for(int i=0;i<n;i++)
{

     vsum=vsum-v[i];
     ssum=ssum-v[i]*v[i];
}
cout<<vsum<<" "<<ssum<<endl;

int missing=(vsum+ssum/vsum)/2;
int missing2=missing-vsum;
cout<<missing2<<" "<<missing;


return 0;
}
