#include<iostream>
#include<queue>
#include<cstdio>
#include<vector>
using namespace std;
// a running stream no idea where how many numbers come in


void query_print(priority_queue<int,vector<int>,greater<int>>pq){

     while(!pq.empty())
     {
          cout<<pq.top()<<",";
          pq.pop();

     }
     cout<<endl;
}


int main()
{
     int no;
     int k=3;
     priority_queue<int,vector<int>,greater<int>>pq;
     int cs=0;


     while(scanf("%d",&no)!=EOF)
     {
         // cout<<no<<endl;
          if(no==-1){

               query_print(pq);
          }
          else if(cs<k)
          {

               pq.push(no);
               cs++;
          }
          else
          {

               if(no>pq.top())
               {
                    pq.pop();
                    pq.push(no);
               }
          }
     }



     return 0;
}
