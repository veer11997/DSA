#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

/*
int main()
{
int arr[]={1,3,-1};
int maximum=0;
for(int i=1;i<=3;i++)
{
int j=1;
while(j<=3)
{
int abd=abs(arr[i-1]-arr[j-1])+abs(i-j);
maximum=max(abd,maximum);
j++;
}

}
cout<<maximum;
return 0;
}



*/
int main()
{


    int arr[]={1,3,-1};
    int max1 = INT_MIN, min1 = INT_MAX;
    int max2 = INT_MIN, min2 = INT_MAX;
    for(int i=0;i<3;i++)
    {

         max1=max(max1,arr[i]+i);
         max2=max(max2,arr[i]-i);
        min1=min(min1,arr[i]+i);
        min2=min(min2,arr[i]-i);
    }
    cout<<max(max1-min1,max2-min2);
    return 0;
}
