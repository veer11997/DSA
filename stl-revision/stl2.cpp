#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


void setdemo()
{

     set<int> s;
     s.insert(1);
     s.insert(12);
     s.insert(-1);
     s.insert(5);
     s.insert(8);
     s.insert(3);

     for(int x : s)
    {

         cout<<x<<" ";

    }
     cout<<endl;


     auto it = s.find(-1);//if an item is not present then it will return s.end() iterator
     if(it==s.end())
     {
        cout<<"not present\n";

     }
     else{

          cout<<"present\n";
          cout<<*it<<endl;

     }


     auto it1=s.lower_bound(-1);//iterator to the first element  in the set  actullay it is sorted no need tosort
     auto it2=s.lower_bound(0); // as we know lower bound give us  greater then or equal to number

     cout<<*it1<<" "<<*it2<<endl;


     //But what if we are interseted in strictly greater

     auto it3=s.upper_bound(-1);
     auto it4=s.upper_bound(0);
    cout<<*it3<<" "<<*it4<<endl;


    auto it5=s.upper_bound(12);
    if(it5==s.end())
    {

         cout<<"oops sorrywe cant find somthing like that \n";
    }


    // Actullay we  can erase any number  from set in log(N) time  by s.erase(1)


      s.erase(1);
      for(int x : s)
    {

         cout<<x<<" ";

    }
     cout<<endl;


}

int main()
{

setdemo();
return 0;
}
