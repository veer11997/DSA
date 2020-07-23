#include<iostream>
#include<dequeue>

using namespace std;

//efficint insertion and deletion
// random access possible
// nice feature of linked list and vector
//it refers to doubly ended queue
//sliding  window problem

int main()
{
     int n;
     int a[100000];
     int k;

     cin>>n;

     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     cin>>k;

     // we have to process k element first
     deque<int> q(k);

     for(int i=0;i<k;i++)
     {
          while(!q.empty() && a[i]>a[q.back()])
          {
               q.pop_back();
          }
          q.push_back(i);
     }
     for(;i<n;i++)
     {
          cout<<a[q.front()]<<",";

          //remove the element which is not part of the window

          // remove the element which are not useful are in the window

          //add the new element(expansion)
     }




}
