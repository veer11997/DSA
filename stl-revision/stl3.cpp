#include<iostream>
#include<map>
#include<set>
#include<algorithm>
using namespace std;


void powerofstl()
{



     //add[2,3];
    // add[10,20];
    // add[30,400];

     // Give me the interval in which a point occured or fall in to the interval


     set<pair<int,int>> s;
     s.insert({401,450});
     s.insert({2,3});
     s.insert({30,400});
     s.insert({10,20});


          //log(N)
        // compare the pair
        // so pair{a,b} is smaller then pair {c,d} if (a<b) or (a==b) and (c<d)

        int point =401;
     auto it =s.upper_bound({point,INT_MAX});
     if(it==s.begin())
     {

          cout<<"the point is not lying in any interval";
          return;
     }
     it--;
     pair<int,int> current =*it;
     if(current.first<=point && point<=current.second)
     {

          cout<<"Yes it is present  "<<current.first<<" "<<current.second<<endl;

     }
     else{

           cout<<"NO  it is  NOT present or lying in any interval "<<endl;
     }




}

void mapdemo()
{
     map<int,int> m;
     m[1]=100;
     m[2]=-1;
     m[3]=300;
     m[10000212]=1;

     map<char,int> cnt;
     string x="virendra patankar";
     for(char c : x)
     {

          cnt[c]++;
     }

     cout<<cnt['r']<<" "<<cnt['a']<<endl;

     // Actually you can also find  and delete a key in map  or not in just
     // log(N) time  m.find(key) and m.erase(key)








}


int main()
{

     mapdemo();

     powerofstl();
     return 0;
}
