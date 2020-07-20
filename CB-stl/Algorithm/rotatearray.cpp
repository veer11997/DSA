#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int arr[]={10,20,30,40,50,60};
int n=sizeof(arr)/sizeof(int);

rotate(arr,arr+2,arr+n);

vector<int> v{10,20,30,40,50};
rotate(v.begin(),v.begin()+3,v.end());
for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";

        cout<<endl;
     for(int i=0;i<v.size();i++)
     cout<<v[i]<<" ";

return 0;
}
