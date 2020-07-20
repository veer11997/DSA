#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

vector<int> v={3,5,4,2};
int n=v.size();
vector<pair<int,int>> p;
for(int i=0;i<n;i++)
{
     p.push_back(make_pair(v[i],i));

}

sort(p.begin(),p.end());
int ans=0;
int rmax=p[n-1].second;
    for(int i=n-2;i>=0;i--){
        ans=max(ans,rmax-p[i].second);
        rmax=max(rmax,p[i].second);
    }
    cout<<ans<<endl;


for(int i=0;i<n;i++)
cout<<p[i].first<<" "<<p[i].second<<endl;


return 0;
}
