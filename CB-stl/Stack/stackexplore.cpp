#include<iostream>
#include<stack>

using namespace std;


int main()
{
     // its a lifo type data structure  lastin, firstout
     // mrthod are push pop top empty

     stack<int> s;
     for(int i=0;i<=5;i++)
     {
          s.push(i);//O(1)
     }

     //lopp
     while(!s.empty()){


          cout<<s.top()<<","; // O(1);
          s.pop();//O(1)
     }
     // internaly stack can be implement of array//linkedlist//vector//dynamic array

cout<<s.empty();
     return 0;
}
