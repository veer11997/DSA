#include<iostream>
using namespace std;

int main()
{


     int num;
     cin>>num;
     int co=0;
     while(num!=0)
     {
          num=num/10;
          co++;

     }
     cout<<"total digit "<<co;

     return 0;
     }
