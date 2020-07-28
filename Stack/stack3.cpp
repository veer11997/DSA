#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

// Nearest Smaller to Left


int main()
{
     vector<int> v;
     stack<int> s;
     int arr[]={4,5,2,10,8};
     int n=sizeof(arr)/sizeof(int);

     for(int i=0;i<n;i++)
     {
          if(s.size()==0)
          {

               v.push_back(-1);
          }

          else if(s.size()>0 && s.top()<arr[i] )
          {
               v.push_back(s.top());
          }
          else if(s.size()>0 && s.top()>=arr[i])
          {
               while(s.size()>0 && s.top() >=arr[i])
               {
                    s.pop();

               }
               if(s.size()==0)
               {

                    v.push_back(-1);
               }
               else{
                    v.push_back(s.top());
               }

          }

          s.push(arr[i]);
     }

     for(int x : v)
          cout<<x<<" ";

     return 0;

}
