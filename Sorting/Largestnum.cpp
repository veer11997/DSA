#include<iostream>
#include<algorithm>
using namespace std;



 struct cmp
 {

      bool operator()(string l,string r)
      {
           //return l+r>r+l;
           if(l+r>r+l)
           {

                return true;
           }
           else
           {

                return false;
           }

      }
 };
int main()
{

 string a[1000];
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
     cin>>a[i];

 sort(a,a+n,cmp());


 for(int j=0;j<n;j++)
     cout<<a[j]<<" ";


return 0;
}
