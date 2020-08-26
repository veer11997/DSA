#include<iostream>
using namespace std;

int main()
{
int a=0;
int b=1;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
     cout<<a<<endl;
     int c=a+b;
     a=b;
     b=c;

}

return 0;
}

