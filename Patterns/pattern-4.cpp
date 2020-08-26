#include<iostream>
using namespace std;

int main()
{
     int num;
     cin>>num;

     int space=0;
     int star=num;
     for(int i=1;i<=num;i++)
     {
          for(int j=1;j<=space;j++)
               cout<<"\t";
          for(int j=1;j<=star;j++)
          {
               cout<<"*\t";
          }
          space++;
          star--;
          cout<<endl;
     }

     return 0;
}


