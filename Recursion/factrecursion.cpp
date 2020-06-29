#include<iostream>
using namespace std;


int fact(int f)
{
     // call stack
     if(f==0)
          return 1;
     int factorial=fact(f-1);
     return f*factorial;
}


int main()
{
     int n;
     cin>>n;
     int fi=fact(n);
     cout<<"factorial is "<<fi<<endl;


return 0;
}
