#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{

     string str="hello world";
    //

     int start=str.length();
     int last=0;

     for(int i=start;i>-1;i--)
     {
          if(str[i]==' ')
          {
               last=i+1;
               break;

          }
     }

     cout<<start-last<<endl;

}
