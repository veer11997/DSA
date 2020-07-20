#include<iostream>

using namespace std;

struct Queue
{

     int arr[5];
     int fron,rear;
};


void inserte(struct Queue *q,int x)
{

     if(q->rear==4)
     {

          cout<<"\nQueue overflow";
          return ;
     }
     q->rear=q->rear+1;
     q->arr[q->rear]=x;
}

int removed(struct Queue *p)
{
     int x;
     if(p->fron>p->rear)
     {
          cout<<" \nqueue underflow";
          return 0;
     }
     x=p->arr[p->fron];
     p->fron=p->fron+1;
     return x;
}

int main()
{

struct Queue q;
q.fron =0;
q.rear =-1;
int x;
for(int i=0;i<=5;i++)
{
     cin>>x;
     inserte(&q,x);
}

for(int i=0;i<=5;i++)
{
     x=removed(&q);
     if(x!=0)
     {
          cout<<"\n poped element is "<<x;

     }

}

return 0;
}
