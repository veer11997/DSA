#include<iostream>
#include<cstring>
#include<list>
using namespace std;



//template<typename T>  or template<class T>
//begin()--> starting point of the container
//end() ==> next to the ending point of the container
//work on all containers

template<class Forwarditerator,class T>
Forwarditerator itsearch(Forwarditerator start,Forwarditerator en,T key)
{
     while(start!=en)
     {

          if(*start==key)
               return start;
     start++;

           }
           return en;
}


int main()
{
list<int> l;
int k=50;
l.push_back(1);
l.push_back(5);
l.push_back(7);
l.push_back(9);
auto it=itsearch(l.begin(),l.end(),k);// l.begin() is iterator of data type list<int> :: iterator our forward itertor ogf this data type
if(it==l.end())
{
cout<<"element not present"<<endl;
}
else{
cout<<*it<<endl;
}
return 0;
}
