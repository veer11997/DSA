#include<iostream>
#include<list>


using namespace std;

int main()
{
// list stl means  doubly linked list
//it is linear dat structure  but memory is not continues
//it is usefull when insertion and deletion in middle because  we have to just add new node their O(1) we can remove from both side
// while in vector we have to shift all element in right

list<int> l;

//init
list<int> l1{12,3,10,8,5};

// different datatype

list<string> l2{"apple","guava","mango","bnana"};
l2.push_back("pineapple");

//sort

l2.sort();


//reverse
l2.reverse();

//pop_front
cout<<l2.front()<<endl;
l2.pop_front();

// remove last element and add in first

l2.push_front("kiwi");
cout<<l2.back()<<endl;
l2.pop_back();

//iterate over the list
cout<<endl;
for(auto it =l2.begin();it!=l2.end();it++)
     cout<<(*it)<<"->";
cout<<endl;
for(string x : l2)
     cout<<x<<"->";

//some more function in the list

l2.push_back("orange");
l2.push_back("lemon");

for(string s : l2)
     cout<<s<<"->";

     cout<<endl;
//remove a fruit

string fr;
cin>>fr;
l2.remove(fr);

for(string s : l2)
     cout<<s<<"->";

     //erase one or more element
     auto it=l2.begin();
     it++;
     it++;
     l2.erase(it);

     cout<<endl;

for(string s : l2)
     cout<<s<<"->";

     //we can insert element in the list

     it=l2.begin();
     it++;
     l2.insert(it,"fruitjuice");
     cout<<endl;

for(string s : l2)
     cout<<s<<"->";
return 0;
}
