#include<iostream>

using namespace std;


struct stack
{
     float arr[10];
     int tos;
};

int main()
{

char postfix[10];
float ans;
printf("Enter a valid postfix expression ");
scanf("%s",postfix);
ans=solve(postfix);
printf("result of expression of %s is %f",postfix,ans);
getch();

return 0;
}

int isoperand(char ch)
{

     if(ch>=48 && ch<=57)
          return 1;
     else
          return 0;
}

float calculate(float op1,float op2,char ch)
{

     switch(ch)
     {
     case '+':
          return op1+op2;
     case '-':
          return op1-op2;
     case '*':
          return op1*op2;
     case '/':
          return op1/op2;
     case '$':
          return (pow(op1,op2));
     case '%':
          return (fmod(op1,op2));
     default:
          return 0.0;



     }
}


void push(struct stack *p,float x)
{
     if(p->tos==9)
     {
          printf("stack overflow")
          return ;
     }
     p->tos=p->tos+1;
     p->arr[p->tos]=x;
}

float pop(struct stack *s)
{
     float x;
     if(s->tos==-1)
          {
               printf("stack underflow");
               return 0.0;
          }

          x=s->arr[s->tos];
          s->tos=s->tos-1;
          return x;
}


float solve(char postfix[])
{

     float op1,op2,ans;
     char ch;
     struct stack s;
     s.tos=-1;
     for(int i=0;postfix[i]!='\0';i++)
     {
          ch=postfix[i];
          (isoperand(ch)==1)
          {

               push(&s,postfix[ch-48]);
          }
          else
          {
               op1=pop(&s);
               op2=pop(&s);
               ans=calculate(op1,op2,ch);
               push(&s,ans);
          }
     }

     ans=pop(&s);
     return ans;
}
