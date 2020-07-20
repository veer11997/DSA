#include<iostream>
#include<queue>

using namespace std;

int main()
{
//FIFO data structure first in First out

queue<int>q;

for(int i=0;i<=5;i++)
     q.push(i);

     while(!q.empty())
     {

          cout<<q.front()<<",";
          q.pop();
     }



return 0;

}
