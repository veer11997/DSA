#include<iostream>
#include<vector>
using namespace std;


int lis(int arr[],int n)
{


     vector<int> v;
     v.push_back(arr[0]);
     for(int i=1;i<n;i++)
     {


          if(v.back()<arr[i])
               v.push_back(arr[i]);
          else
          {

               int ind =lower_bound(v.begin(),v.end(),arr[i])-v.begin();
               v[ind]=arr[i];
          }
     }

     return v.size();
}

int main()
{

//O(NLOGN)

int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{

     cin>>arr[i];
}

cout<<lis(arr,n);

return 0;
}
