#include<iostream>
using namespace std;

int main()
{
int low,high;
cin>>low>>high;

for(int n=low;n<=high;n++)
{
     int co=0;
     for(int div=2;div*div<=n;div++)
     {

          if(n%div==0)
          {
               co++;
               break;
          }
     }
     if(co==0)
     {
          cout<<"prime number "<<n<<endl;
     }
}


return 0;
}
