#include<iostream>
#include<math.h>

using namespace std;

// 1 5 3 2 4
// 4 1 3 2 5
int main()
{
     int num;
     cin>>num;
     int inv=0;
     int op=1;
     while(num!=0)
     {
          int od=num%10;
          int id=op;
          int ip=od;

          inv=inv+id*pow(10,ip-1);
          num = num/10;
          op++;

     }
     cout<<inv;


     return 0;
}
