#include<iostream>

using namespace std;

int digitfreq(int num,int d)
{

     int rv=0;
     while(num>0)
     {
          int dig=num%10;
          num=num/10;
          if(d==dig)
               rv++;

     }
     return rv;
}



int main()
{
     int num;
     cin>>num;
     int d;
     cin>>d;
     int ans=digitfreq(num,d);
     cout<<"total frequency is "<< ans;
     return 0;
}
