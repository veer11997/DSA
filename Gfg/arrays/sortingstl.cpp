#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{


     vector<int> v ={6,2,0,5,1,9};
     int n=v.size();

      sort(v.begin(),v.end());
      for(int x : v)
          cout<<x<<" ";
cout<<endl;

     sort(v.begin(),v.end(),greater<int> ());

     for(int x : v)
          cout<<x<<" ";

     return 0;
}
