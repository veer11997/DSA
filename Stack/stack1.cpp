#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

//Next largest element  or nearest greater to right


int main()
{
     vector<int> v;
     stack<int> s;
     int arr[]={1,3,0,0,1,2,4};
     int n=sizeof(arr)/sizeof(int);

     for(int i=n-1;i>=0;i--)
     {
          if(s.size()==0)
          {

               v.push_back(-1);
          }

          else if(s.size()>0 && s.top()>arr[i] )
          {
               v.push_back(s.top());
          }
          else if(s.size()>0 && s.top()<=arr[i])
          {
               while(s.size()>0 && s.top() <=arr[i])
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
     reverse(v.begin(),v.end());
     for(int x : v)
          cout<<x<<" ";

     return 0;

}
