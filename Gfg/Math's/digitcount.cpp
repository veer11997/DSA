#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int num;
cin>>num;
cout<<floor(log10(num))+1<<endl;
int coun=0;
while(num>0)
{
num=num/10;
coun++;
}
cout<<"number of Digit "<<coun;

return 0;
}
