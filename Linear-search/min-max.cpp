
#include<iostream>

using namespace std;

int main()
{
    int mi=0,mx=0,sum=0,i=0;
    int n;
    cin>>n;
    int arr[n];
    mx=INT8_MIN;
    mi=INT8_MAX;
    while(i<n)
    {
        cin>>arr[i];
        if(mi>arr[i])
        mi=arr[i];
        if(mx<arr[i])
        mx=arr[i];
        sum=sum+arr[i];
        i++;

    }

    cout<<sum-mx<<" "<<sum-mi;
    return 0;
}
