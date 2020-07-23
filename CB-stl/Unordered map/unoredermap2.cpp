#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

//when data is in the key and value pair
//internally implemented as bst self balancing and ordered by key



int main()
{

//make object of map
unordered_map<string,int> m;

//insert
m.insert(make_pair("mango",100));

pair<string,int> p;
p.first="apple";
p.second=120;

m.insert(p);

m["banana"]=20;


//search of find

string fruit;
cin>>fruit;

auto it=m.find(fruit);// it returns the iterator  //map<string,int> :: iterator it
if(it!=m.end())
{

     cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
}
else
{

     cout<<"fruit not present";
}


//Erase
//m.erase(fruit);

// update price

m[fruit]+=20;

// other way to find
// it stores unique keys only once
// we can count also

if(m.count(fruit))// it returns the integer
{
     cout<<"price is "<<m[fruit]<<endl;

}
else
{

     cout<<"not present:";

}
m["litchi"]=60;
m["pineaple"]=100;

// iterate over all  the key value pairs

for(auto it =m.begin();it!=m.end();it++)
{


     cout<<it->first<<" "<<it->second<<endl;
}
cout<<endl;

//for each loop

for(auto p : m)
{

     cout<<p.first<<"  : "<<p.second<<endl;

}

return 0;
}
