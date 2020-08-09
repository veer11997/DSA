
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int x=0;
    while(n>0)
    {
        cin>>x;
        v.push_back(x);
        n--;
    }
    int test;
    cin>>test;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==test)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
