#include<iostream>

using namespace std;

struct stack
{
int arr[5];
int tos;

};

void push(struct stack *s,int x)
{

     if(s->tos==4){
          cout<<"\nStack overflow";
          return;
}
     s->tos=s->tos+1;
     s->arr[s->tos]=x;
}

int pop(struct stack *s)
{
int x;
     if(s->tos==-1){
          cout<<"\nStack underflow";
          return 0;
     }

     x=s->arr[s->tos];
     s->tos=s->tos-1;
     return x;
}

int main()
{

struct stack s;
s.tos=-1;
int x=0;
for(int i=1;i<=6;i++)
{
     cin>>x;
     push(&s,x);
}
for(int i=1;i<=6;i++)
{

     x=pop(&s);
     if(x!=0)
          cout<<"\npoped element is "<<x;
}

return 0;
}
