#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
vector<int> v1={0,23};
vector<int> v2={};
if(v2.empty())
     cout<<"emp"<<endl;
for(int i=0;i<v2.size();i++)
 v1.push_back(v2[i]);

 sort(v1.begin(),v1.end());
int n=v1.size();
if(n%2==0)
     cout<< v1[n/2];
else
     cout<< (v1[n/2]+v1[n/2+1])/2;
cout<<endl;
 for(int x : v1)
     cout<<x<<" ";


     return 0;

}
