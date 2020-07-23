#include<iostream>
#include<queue>
using namespace std;

class person
{

public:
string name;
int age;
person(){


}

person(string n,int a)
{
name=n;
age=a;
}


};

class personcompare
{

public:
bool operator()(person a,person b)
{


return a.age<b.age;
}

};



int main()
{

int n;
cin>>n;

priority_queue<person,vector<person> ,personcompare> pq;


for(int i=0;i<n;i++)
{

string name;
int age;
cin>>name>>age;
person p(name,age);
pq.push(p);

}
int k=3;
for(int i=0;i<k;i++)
{

     person p=pq.top();
     cout<<p.name<<" "<<p.age<<endl;
     pq.pop();
}

}
