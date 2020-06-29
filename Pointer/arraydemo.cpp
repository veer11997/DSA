#include<iostream>

using namespace std;

int main()
{
     int a[10];


     cout<<a<<endl;
     cout<<&a<<endl;


     a[0]=5;
     a[1]=10;


     cout<<*a<<endl;
     cout<<*(a+1)<<endl;

     int *p=&a[0];

     cout<<a<<endl;
     cout<<p<<endl;


     cout<<&a<<endl;
     cout<<&p<<endl;


     cout<<sizeof(p)<<endl;
     cout<<sizeof(a)<<endl;


     p=a+1;
     p=p+1;

     return 0;



     return 0;
}
