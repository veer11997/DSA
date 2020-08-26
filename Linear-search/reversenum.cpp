#include<iostream>
using namespace std;
int main()
{

     int num;
     cin>>num;

     while(num>0)
     {
          int temp=num%10;
          cout<<temp<<endl;
          num=num/10;

     }

     return 0;

}
