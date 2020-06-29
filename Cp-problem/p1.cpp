#include<iostream>
using namespace  std;


int main()
{


     int test;
     cin>>test;
     while(test>0)
     {
          int n=0,x=0;
          cin>>n>>x;
          int arr[n];
          while(n>0)
          {
               int i=0;
               cin>>arr[i];


               i++;
               n--;
          }
         int sum=0;
         int j=0;
         while(x>0) {

               sum=sum+arr[j];
               if(sum%2==0)
                    cout<<"No";
               else
                    cout<<"Yes";
               j++;
               x--;
          }


          test--;
     }
     return 0;
}
