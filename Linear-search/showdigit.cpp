#include<iostream>
#include<math.h>
using namespace std;

int main()
{


     int num,temp;
     cin>>temp;
     num=temp;
     int co=0;
     while(num!=0)
     {
          num=num/10;
          co++;

     }
     co--;
     int div=(int)pow(10,co);
     while(div!=0)
     {
          int rem=temp/div;
          cout<<rem<<endl;
          temp=temp%div;
          div=div/10;

     }

     return 0;
     }
