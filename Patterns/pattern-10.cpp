#include<iostream>
using namespace std;

int main()
{


     int n;
     cin>>n;

     int os=n/2;
     int is=-1;

     for(int i=1;i<=n;i++)
     {
          for(int j=1;j<=os;j++)
          {
               cout<<"\t";
          }
          cout<<"*\t";
          for(int j=1;j<=is;j++)
          {
               cout<<"\t";

          }
          if(i>1 && i<n)
               cout<<"*\t";
          if(i<=n/2)
          {
               os--;
               is+=2;
          }
          else{
               os++;
               is-=2;
          }


          cout<<endl;
     }

}
