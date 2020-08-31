#include<iostream>
using namespace std;


int fact(int n)
{
     int f=1;
     for(int i=1;i<=n;i++)
          f=f*i;
     return f;
}

int main()
{

     int n,r;
     cin>>n>>r;
     int nfact=fact(n);
     int nmrfact=fact(n-r);
     int npr=nfact/nmrfact;
     cout<<"npr is "<<npr<<endl;

}
