#include<iostream>


using namespace std;

// ANy base Addition

int getsum(int b,int n1,int n2)
{
     int rv=0;
     int p=1;
     int c=0;

     while(n1>0 ||n2>0 ||c>0)
     {
          int d1=n1%10;
          int d2=n2%10;
          n1=n1/10;
          n2=n2/10;

          int d=d1+d2+c;
          c=d/b;
          d=d%b;
          rv=rv+d*p;
          p=p*10;

     }

     return rv;


}


int main()
{
     int n1,n2,b;
     cin>>n1>>n2>>b;
     int d=getsum(b,n1,n2);
     cout<<d<<endl;

}
