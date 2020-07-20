#include<iostream>
#include<algorithm>

using namespace std;


int main()
{

vector<int> v={1,2,6};
next_permutation(v.begin(),v.end());
next_permutation(v.begin(),v.end());


for(int x : v)
     cout<<x<<" ";

return 0;
}
