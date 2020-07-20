#include<iostream>
#include<cmath>
using namespace std;

int main()
{


 int n;
cin>>n;
    if(n==1||n==0) return 1;
    int p=2;
    float x=pow(n,1.0/p);
    while((int)x>1){
        cout<<x<<endl;
        if(x-(int)x==0)
         return 1;
        p++;
        x=pow(n,1.0/p);
    }
    return 0;

/*
int num;
cin>>num;
int a=0;
int p=2;
int ans=1;
while(num!=ans)
{

ans=ans*p;
a++;

}
cout<<a-1;

return 0
*/
}
