#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


 void explorepair()
 {
      pair<int,int>p={1,3};

      cout<<p.first<<" "<<p.second<<endl;

      pair<int,pair<int,int> > q={1,{3,4}};

      cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;

      pair<int,int> arr[]={{1,3},{2,5},{5,7}};

      cout<<arr[2].second<<"  "<<arr[1].first<<endl;
 }


 void explorevector()
 {

      //A empty vector {} NULL vector

      vector<int> v;

      v.push_back(1); //{1}
      v.push_back(5);
      v.push_back(9);

      v.emplace_back(2);// same as push_back

      vector<pair<int,int>> vec;

      vec.push_back({2,3});
      vec.emplace_back(5,6);


      vector<int> a(5,100);
      // vector of size with value 100


      vector<int> p(5);
      // initialiazed with value 0



      vector<int> v2(p);

      //copy of vector v1

      //+++++++++++ lets come  to iterator


      vector<int> :: iterator it=v.begin();
      it++;

      cout<<*it<<endl;


      it=it+2;

      cout<<*it<<endl;

       vector<int> :: iterator it1=v.end();



       vector<int> :: iterator it3=v.end();

       //vector<int> :: iterator it2=v.rbegin();



       cout<<v[0]<<" "<<v.at[0]<<" "<<v.back();


       for(vector <int> :: iterator it4 =v.begin();it4!=v.end();it4++)
          cout<<*(it4)<<" ";
       cout<<endl;
       for(auto it5=v.begin();it5!=v.end();it5++)
          cout<<*(it5)<<" ";
       cout<<endl;

       for(auto  it : v)
       {
          cout<<it<<" ";
       }

       cout<<endl;


       v.erase(v.begin());

       v.erase(v.begin()+2,v.end()+4);// start  to end-1



       vector<int> p(2,100);
       p.insert(p.begin(),300);


       vector<int> copy(2,50); //{50,50}
       p.insert(p.begin(),copy.begin(),copy.end());// copy the whole copy vector int p

       cout<<p.size();

       cout<<pop_back;

          // v1->{10,20}
          //v2->{30,40}

       v1.swap(v2);

      // v2->{10,20}
          //v1->{30,40}


       // erase the entire vector

       v.clear();

       // check to vector is empty or not

       v.empty();





 }


void explorelist()
{


     list<int> ls;

     ls.push_back(2);

     ls.emplace_back(4);

     ls.push_front(5);

     ls.emplace_front(6);

     // similar like vector but having much complexity and used only when we want to push from front
     //rest function are same as vector
     //begin,end,rbegin,rend,clear,insert,size,swap


}


void exploredeque()
{



     deque<int> dq;
     dq.push_back(1);
     dq.push_front(4);
     dq.emplace_back(5);
     dq.emplace_front(7);
     dq.pop_back();
     dq.pop_front();
     dq.back();
     dq.front();


     //rest function are same as vector
     //begin,end,rbegin,rend,clear,insert,size,swap

}

void explorestack()
{
     stack<int> s;
     s.push(3);
     s.push(4);
     s.push(8);
     s.emplace(6);

     cout<<s.top();

     cout<<s.size();

     cout<<s.empty();

     stack<int> st1,st2;
     st1.swap(st2);


}

void explorequeue()
{

     queue<int> q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.emplace(5);

     // to access the last element of the queue
     q.back()+=5;

     cout<<q.back()// 5+5=> 10

     cout<<q.front();

     q.pop();

     cout<<q.front();

     // size swap empty same as stack




}


void explorepriority_queue()
{
     // it stored in sorted order

     priority_queue<int> pq;

     pq.push(4);
     pq.push(5);
     pq.push(9);
     pq.emplace(12);

     // now pq is {12,9,5,4}

     cout<<pq.top();// prints 12

     pq.pop(); // 9,5,4

     cout<<pq.top();//prints 9

     // size swap empty function are same

     // minimum heap


     priority_queue<int,vector<int>,greater<int>> pp;

     pp.push(5);//5
     pp.push(2);//2,5
     pp.push(8);//2,5,8
     pp.emplace(10);//2,5,8,10


     cout<<pp.top();// =>2



}

void exploreset()
{

     // set store element in sorted order but it store unique element

     set<int> st;
     st.insert(1);
     st.emplace(2);
     st.insert(2);
     st.insert(4);
     st.insert(3);


     // Functionality of insert in vector
     //can be used also that only increases
     //efficiency

     //{1,2,3,4
     //begin() end() rbegin() rend() size()
     //empty() swap() same as above




     auto it=st.find(3);

     // return a pointer
     auto it =st.find(6);

     st.erase();// erase 5  takes logarithmic time

     auto it =st.find(5);

     int cnt=st.count(1);
     auto it =st.find(3);

     st.erase(it);// it happens in constant time

     auto it1 =st.find(2);
     auto it2 = st.find(4);

     st.erase(it1,it2);
     /after erase {1,4,5}{first,last}


     // lower bound and upper bound function in the same  way

     auto it=st.lower_bound(2);
     auto it=st.upper_bound(4);


}

void exploremultiset()
{

     // Everything is same as set
     //it stores duplicate element as well

     multiset<int> ms;
     ms.insert(1);
     ms.insert(2);
     ms.insert(1);

     int cnt=ms.count(1);

     ms.erase(1);
     // it will delete all 1 in set

     // to delete only one 1  element

     ms.erase(ms.find(1));

     ms.erase(ms.find(1),ms.find(1)+2);

     // rest all function same as set



}


void exploreunordered_set()
{

     // lower_bound and upper_bound function
     // all function are same
     // it does not store in any particular order
     // it has  a better complexity
     //it faces the problem like collision
     //it stores unique element
     // it does not  store insorted order and dont use lower and upper


     unordered_set<int>
}

void exploremap()
{
     //{key,value}

     map<int,int> mp;

     map<int,pair<int,int>> mp1;
     map<pair<int,int> ,int> mp2;
     //key values can be anything

     mp[1]=2;

     mp1.emplace({3,1});
     mp2.insert({2,4});
     {

          {
               1,2
          }
          {
               2,4
          }
          {

               3,1
          }
     }// it is sorted order

     for(auto it : mp1)
          cout<<it.first<<" "<<it.second<<endl;

     cout<<mp1[1];

     cout<<mp1[5];// if it does not exist it returns 0

     auto it = mp1.find(3);
     // point to the position where it finds 3

     // if it does not find then it point to the end


     // upper_bound and lower bound  same as above

}

void exploremultimap()
{

     //{1,2} {1,3}
     // everything same as map ,only it can store multiple keys
     // only map[key] can not be used

}

bool comp(pair<int,int<p1,pair<int,int> p2)
{

     if(p1.second<p2.second)
          return true;
     else if(p1.second==p2.second)
     {
          if(p1.first>p2.second)
               return true;
     }
     return false;

     // pair p1 is ahead lie of pair 2 it means true
     // pair 2 lies ahead of pair 1 it means false
     //{1,2) (2,1) (4,1)==>(4,1) (2,1) (1,2)
}
void exploreunordered_map()
{
     //// same as set and unordered_set diferences  store in sorted
}

void explorextraa()
{

     sort(a,a+n); // sort in ascending order

     sort(a,a+n,greater<int>); // sort in descending order



     pair<int,int> a[]={{1,2},{2,1},{4,1}};

     // sort it according to second  to second element
     //it second element is same , then sort
     // it according to first element but in descending

     sort(a,a+n,comp);
     //{{4,1},{2,1},{1,2}};


     int num=7;//111

     int cnt=_builtin_popcount();// convert into binary

     long long num=165785786687;

     int cnt=_builtin_popcountll();

     string s="123";

     do
     {

          cout<<s<<endl;

     }while(next_permutation(s.begin(),s.end()));

     //next permutation


     int maxi= *max_element(a,a+n); // max element in array
}
int main()
{

      // explorepair();
      // explorevector();
      // explorelist();
      // exploredeque();
      // explorestack();
      //explorequeue();
      //explorepriority_queue();
      //exploreset();
      //exploremultiset();
      //exploreunordered_set();
      //exploremap();
      //exploremultimap();
      // exploreunordered_map();
      //exploreextraa();

return 0;
}
