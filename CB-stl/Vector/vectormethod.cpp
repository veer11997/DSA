#include<iostream>
#include<vector>


using namespace std;

int main()
{

vector<int> d{1,2,3,10,14};

//O(1)
d.push_back(16);
d.pop_back();//remove the last element
d.insert(d.begin()+3,100);//insert at the specific element
// if we want to multiple element
d.insert(d.begin()+4,3,50);

// erase element from middle
//O(N)
d.erase(d.begin()+2);
d.erase(d.begin()+2,d.begin()+4);//multiple erase element
cout<<d.size()<<endl;
cout<<d.capacity()<<endl;
d.resize(10);/// if the size is incerases more memory allocate but not shrink
d.clear();//erase all the vector  but size will be zero but not capacity


//empty
if(d.empty()){

     cout<<"This is an empty vector";
}
for(int x : d)
     cout<<x<<",";

cout<<endl;

d.push_back(2);
d.push_back(7);
d.push_back(6);
cout<<d.front()<<endl;
cout<<d.back()<<endl;


// reserve

int n;
cin>>n;
vector<int> v;
// to avoid doubling we will use reserve function


v.reserve(1000);//capacity will remain same until we not reach their
for(int i=0;i<n;i++)
{

     int no;
     cin>>no;
     v.push_back(no);
     cout<<v.capacity()<<endl;

}

cout<<v.capacity()<<endl;

for(int x : v)
     cout<<x<<",";


return 0;
}
