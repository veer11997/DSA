#include<iostream>
using namespace std;

int main()
{
     int num;
     cin>>num;

     int space=num-1;
     int star=1;
     for(int i=1;i<=num;i++)
     {
          int j;
          for(j=1;j<=space;j++)
               cout<<"\t";
          for(int j=1;j<=star;j++)
          {
               cout<<"*\t";
          }
          space--;
          star++;
          cout<<endl;
     }

     return 0;
}


