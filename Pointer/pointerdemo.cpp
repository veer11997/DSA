#include<iostream>

using namespace std;


int sum(int *a,int si)//int sum(int a[],int si){}
{
     int ans=0;
     for(int i=0;i<si;i++)
          ans=ans+a[i];
     return ans;

}

void incrementpointer(int * p)
{
p=p+1;
}

void increment(int * p)
{

(*p)++;

}

int main()
{

int n;
cin>>n;

int *p=&n;

cout<<p<<endl;
incrementpointer(p);
cout<<p<<endl;


// a[0]==> *(a+0) same as pointer sign

cout<<*p<<endl;
increment(p);
cout<<*p<<endl;

int a[10]={1,1,1,1,1,1,1,1,1,1};
cout<<sum(a,10)<<endl;

cout<<sum(a+3,7);//half array passed


return 0;
}
