#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Actually it is not other then array and list


bool f(int x,int y)
{
    return x>y;

}

int main()
{
vector<int> A={2,6,4,8,9};
cout<<A[1]<<endl;


sort(A.begin(),A.end());  //O(NlogN)--->sorting
cout<<A[1]<<endl;

///O(logN)---> binary searching

bool present =binary_search(A.begin(),A.end(),3); //False
cout<<present<<endl;


present =binary_search(A.begin(),A.end(),4);//True
cout<<present<<endl;

A.push_back(100);
A.push_back(100);
A.push_back(100);
A.push_back(100);
A.push_back(125);

vector<int> :: iterator it= lower_bound(A.begin(),A.end(),100);  //it returns iterator of lower bound >=
vector<int> :: iterator it1=upper_bound(A.begin(),A.end(),100);  //  >

cout<<*it<<" "<<*it1<<endl;
// occuerance of number can found in vector it means count come of number

cout<<it1-it<<endl<<endl; //O(1) -->4

//====>> sort in some order using comparetor function
sort(A.begin(),A.end(),f);
vector<int> :: iterator it2;
for(it2=A.begin();it2!=A.end();it2++)
{

    cout<<*it2<<" ";

}

cout<<endl;



//references
for(int &x : A){
        x++;
               }
for(auto &x:A){
            cout<<x<<" ";
            }
return 0;
}
