#include<iostream>


// find the index where sum before the index is equal to some after that index
using namespace std;
int main()
{

int n;
cin>>n;
int sum=0;
int a[n];
for(int i=0;i<n;i++)
{

cin>>a[i];
sum=sum+a[i];
}
int sumprev=a[0],sumwithoutme=0,sumafter=0;
for(int i=1;i<n;i++)
{

sumwithoutme=sum-a[i];
sumafter=sumwithoutme-sumprev;
if(sumprev==sumafter)
     {
          cout<<i<<endl;
          cout<<1;
      break;
     }
      sumprev=sumprev+a[i];


}

return 0;
}
