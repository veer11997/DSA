#include<iostream>
#include<map>
using namespace std;



int main()
{
multimap<char,string> m;

int n;
cin>>n;
for(int i=0;i<n;i++)
{
     char ch;
     string s;
     cin>>ch>>s;
     m.insert(make_pair(ch,s));
}



//erase
 auto it m.begin();
 m.erase(it);

 //for find
 auto it2 =m.lower_bound('b');
 // give the grater or equal to key
auto it3 =m.upper_bound('d');
 //try to print the map

for(auto x : m)
{

     cout<<x.first<<" : "<<x.second<<endl;
}


// search for value

auto f= m.find('c');
if(f->second=="cat")
     m.erase(f);

// log(N)
return 0;
}
