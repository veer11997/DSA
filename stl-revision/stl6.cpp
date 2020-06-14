#include<iostream>
#include<algorithm>
using namespace std;


int main()
{

     int a[]={1,4,8,6,9,10};
     int n=sizeof(a)/sizeof(int);
     bool res = binary_search(a,a+n,4); //Binary search function
     cout<<res<<endl;


     // Lower bound function
     // int ind = lower_bound(a.begin(),a.end(),a)-a.begin();
     auto ind = lower_bound(a,a+n,2); //it point to imidiate greater or equal to that point

     cout<<*ind<<endl;

     int  in = upper_bound(a,a+n,9)-a; // it always point which is greater

     cout<<a[in];

          // be aware while upper_bound it has to point out of the array


     return 0;
}
