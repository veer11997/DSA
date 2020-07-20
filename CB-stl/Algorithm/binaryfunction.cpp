#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
int a[]={20,30,40,40,40,50,100,1100};
int n=sizeof(a)/sizeof(int);
int key;
cin>>key;
bool present=binary_search(a,a+n,key);
if(present)
     cout<<"present:";
else
     cout<<"not present";

// what when we need to index of the element
// for that we have lower_bound and upper_bound
// it return the address where the element present
//int *

auto it =lower_bound(a,a+n,key);// it return the address of the first bucket that is greater then or equal to key
cout<<"lower bound of "<<it-a<<endl;
// upper bound return the first one which is greater then that


auto it1 =upper_bound(a,a+n,key);
cout<<"upper bound of "<<it1-a<<endl;

// with the upper-lower can give you the frequency of the number
cout<<"frequency of element  "<<it1-it<<endl;
//log(N)

//if((it-arr)==n)
  //   cout<<"element not present "<<endl;


return 0;
}
