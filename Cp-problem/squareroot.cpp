#include<iostream>
using namespace std;


int mysqrt(int n)
{
     if(n==1)
          return 1;
     int s=0;
     int e=n;
     int mid;
     while(s<=e)
     {

          mid=(s+e)/2;
       if(mid*mid<=n && (mid+1)*(mid+1)>n)
          return mid;
     else if(mid*mid<n)
          s=mid+1;
     else
          e=mid-1;
     }


}


int main()
{

int num;
cin>>num;
int res = mysqrt(num);
cout<<res;

return 0;
}
