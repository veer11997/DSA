#include<iostream>
#include<deque>
using namespace std;

int main()
{
int n;
cin>>n;
int a[100];


for(int i=0;i<n;i++)
{
     cin>>a[i];
}

int k;
cin>>k;
deque<int> q(k);
int i;

for(i=0;i<k;i++)
{
     while(q.empty() && a[i]>a[(q.back())]){

         q.pop_back();
     }

     q.push_back(i);
}
for(;i<n;i++){

     cout<<a[q.front()]<<" ";

     while((!q.empty() && (q.front()<=i-k)))
     {

          q.pop_front();
     }
      while((!q.empty() )&& (a[i]>=a[q.back()]))
     {

          q.pop_back();
     }
     q.push_back(i);

}
return 0;
}
