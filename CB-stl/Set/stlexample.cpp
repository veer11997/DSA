#include<iostream>
#include<set>
using namespace std;

int main()
{

set<pair<int,int> > s;

s.insert(make_pair(10,1));
s.insert(make_pair(10,5));
s.insert(make_pair(20,1));
s.insert(make_pair(20,200));

s.insert(make_pair(5,1));
s.insert(make_pair(5,3));
s.insert(make_pair(5,4));
s.insert(make_pair(15,2));
s.erase(s.find(make_pair(5,3)));



auto  it1=s.upper_bound(make_pair(20,1));
cout<<it1->first<<" "<<it1->second<<endl;

for(auto  p : s)
{
     cout<<p.first<<" : "<<p.second<<endl;
}

}
