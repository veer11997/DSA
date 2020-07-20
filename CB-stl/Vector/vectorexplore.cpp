#include<iostream>
#include<vector>

using namespace std;

// kind of container
// a dynamic array an be grow and shrink according to requirement
// memory internal managed by vector class
// by making vector obj we can access

int main()
{


// way to create and initialize  a vector
vector<int> a;
vector<int> b(5,10); // five int with value 10 init a vector of zeros(n,0)
vector<int> c(b.begin(),b.end());
vector<int> d{1,2,3,10,15};

//Look at how we can iterate over vector

for(int i=0;i<c.size();i++)
     cout<<c[i]<<",";
cout<<endl;


for(auto it=b.begin();it!=b.end();it++)
     cout<<(*it)<<",";

cout<<endl;

// for each loop
for(int x : d)
     cout<<x<<",";
cout<<endl;

// discuss some more function

vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
     int no;
     cin>>no;
     v.push_back(no);//add element to the end of the vector and also expand memory
     //either on expand and we lack of memory then what happen is that it delete the current array and copy it to the
     // another place where it can possible to hold that memory



}

//what are differences in the v and d

cout<<v.size()<<endl;
cout<<v.capacity()<<endl;// size of underlying array
cout<<v.max_size()<<endl;// maximum no of element a vector can hold an vector in worst case

cout<<endl;

cout<<d.size()<<endl;
cout<<d.capacity()<<endl;// size of underlying array
cout<<d.max_size()<<endl;

}
