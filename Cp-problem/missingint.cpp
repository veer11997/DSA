#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

     vector<int> v ={1,2,3,4,5,6,7};
     int n=v.size();
     sort(v.begin(),v.end());
     if(binary_search(v.begin(),v.end(),1))
     {

          for(int i=0;i<n;i++)
          {

               if(v[i]>0 && v[i]+1!=v[i+1])
               {

                    cout<<v[i]+1;
                    break;

               }
          }
     }
     cout<<1;
     return 0;
}
