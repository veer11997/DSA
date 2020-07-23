#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

// creating functional object


class Fun
{

public:

     bool operator()(string s){

     cout<<"Having fun inside operator() FN! "<<s;

     }
};



int main()
{

     Fun f; //constructor call while it is object it is behaving like function call
     f("c++"); // overloaded () operator = Function call where f is an object
     return 0;
}
