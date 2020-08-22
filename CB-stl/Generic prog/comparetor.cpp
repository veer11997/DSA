#include<iostream>
#include<list>
// comparetor give you freedom from custom function
using namespace std;

class Bookcompare{

public:

     // Here we are overloaded a operator ()  and how we call this operator such that
     // we create an object Bookcompare cmp;
     // then call such that cmp() here we can see  it look like function call but cmp is object it can call function object
     bool operator()(Book A,Book B){

     if(A.name==B.name){
        return true;

     }

     return false;



};


int main()
{

 Bookcompare cmp;
 if(cmp(b1,bookfind)){

     cout<<"true same book";
 }


}
