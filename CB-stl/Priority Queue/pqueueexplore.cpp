#include<iostream>
#include<queue>
using namespace std;

int main()
{
// it is also called as Heap
// according do our priority we can arrange the priority queue
// push O(LogN)  same for remove
// print takes top() O(1) height is log(n)
// empty() method
// max heap
// min heap for greater<int>
//priority_queue<int> pq;// max heap
priority_queue<int,vector<int>,greater<int>> pq; //min heap
int n;
cin>>n;
for(int i=0;i<n;i++)
{


     int no;
     cin>>no;
     pq.push(no);
}

//Remove the element

while(!pq.empty())
{

     cout<<pq.top()<<",";
     pq.pop();

}


return 0;
}
