#include<iostream>
#include<algorithm>


using namespace std;


int main()
{

int a=10;
int b=20;

swap(a,b);
cout<<a<<" "<<b<<endl;

cout<<min(a,b)<<endl;
cout<<max(a,b)<<endl;

int p[]={1,2,3,4,5,6};

int n=sizeof(p)/sizeof(int);

reverse(p,p+5);

for(int i=0;i<n;i++)
     cout<<p[i]<<" ";




return 0;
}
