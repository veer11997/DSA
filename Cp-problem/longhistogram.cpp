#include<iostream>
#include<vector>
#include<stack>


using namespace std;

int main()
{
     vector<int> A={2,1,5,6,2,3};
          int n=A.size();



    stack<int> stk;
    vector<int> ans(n,-1);
    vector<int> ans1(n,n);
     for(int i=0;i<n;i++)
      {
        if(stk.empty() or A[stk.top()]<=A[i])
        {

            stk.push(i);
            continue;
        }

    while(!stk.empty() and  A[stk.top()]>A[i])
    {
        ans1[stk.top()]=A[i];
        stk.pop();
    }
    stk.push(i);
    }

    for(int x : ans1)
    cout<<x<<", ";
     while(stk.empty())
          stk.pop();

    for(int i=n-1;i>=0;i--)
    {
        if(stk.empty() or A[stk.top()]<=A[i])
        {

            stk.push(i);
            continue;
        }

    while(!stk.empty()and  A[stk.top()]>A[i])
    {
        ans[stk.top()]=A[i];
        stk.pop();
    }
    stk.push(i);
    }
    cout<<endl;

    for(int x : ans)
    cout<<x<<", ";
   int res=0;
   cout<<endl;
    for(int i=0;i<n;i++)
    {
        res = max(res,(ans1[i] - ans[i]-1)*A[i]);

    }

    cout<<res;
}
