#include<iostream>

using namespace std;

int main()
{

     int n;
     cin>>n;

     int i;

     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }

     int key;
     cin>>key;


     for(i=0;i<n;i++)
     {
          if(key==a[i])
          {

               cout<<"Found at index "<<i<<endl;
               break;
          }

     }

     if(i==n)
          cout<<"the key "<<key<<" is not present"<<endl;

          return 0;



}
