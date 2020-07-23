#include<iostream>
#include<set>
using namespace std;

// to store unique collection in container
// ordered
// it uses bst and red black tree
// log(N)
// you cant update element
// insert find  erase
int main()
{

int arr[]={10,20,11,9,8,11,10};
int n=sizeof(arr)/sizeof(int);

set<int> s;
for(int i=0;i<n;i++)
{

     s.insert(arr[i]);

}

//erase
s.erase(10);
auto it =s.find(11);
s.erase(it);

// print all elements

for(set<int> ::iterator  it=s.begin();it!=s.end();it++)
{


     cout<<(*it)<<",";
}

return 0;
}
