#include<iostream>
using namespace std;



int main()
{

pair<int,char> p;
p.first=10;
p.second='b';//

pair<int,char> p2(p);
cout<<p2.first<<" "<<p2.second<<endl;


// using make_pair() function


pair<int,string> p3=make_pair(100,"Audi");
cout<<p3.first<<" "<<p3.second<<endl;

// we can make pair of array,vector,

pair<pair<int,int>,string> car;
car.second="Audi";
car.first.first=10;
car.first.second=1000;
cout<<car.first.first<<" "<<car.first.second<<endl;




return 0;
}
