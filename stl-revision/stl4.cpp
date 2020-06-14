#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;

void mapdemo()
{

     int n;
     cin>>n;
     vector<int> a(n,0);
     long long int s =0;

     for(int i=0;i<n;i++)
     {

          cin>>a[i];
          s=s+a[i];

     }

     if(s & 1)
     {

          cout<<"NO";
          return 0;
     }
     map<int,int> first,second;

     first[a[0]]=1;

     for(int i=1;i<n;i++)
     {

          second[a[i]]++;
     }

     long long  sdash=0;
     for(int i=0;i<n;i++)
     {

          sdash =sdash+a[i];
          if(sdash==s/2)
          {

               cout<<"YES\n";
               return 0;
          }

          if(sdash<s/2)
          {

               long long x=s/2-sdash;

               if(second[x]>0)
               {

                    cout<<"yes";
                    return 0;
               }
          }
     }

     else
          {

               long long y=sdash-s/2;
               if(first[y] >0)
               {

                    cout<<"yes\n";
                    return 0;
               }
          }
          first[a[i]]++;
          second[a[i+1]]--;
     }

     cout<<"NO\n";

}

int main()
{

     map<char,int> m;
     unordered_map<char,int> u;
     string s="Virendra patankar";

     //add(key,value) =log(N) orderd map and O(1) for unordered map
     //erase (key) =log(N) orderd map and O(1) for unordered map

     //unordered map uses  hashing due do this o(1) and but their might be some collision


    //ordered map usees binary search tree in which key hold some values  such mapping  balance tree

    // Actually set is subset of map which is hold only keys

     for(char c : s)
     {
          m[c]++;//O(NLOGN) where N=|s|
     }


     for(char c : u)
     {

          u[c]++;  //O(N)
     }


}
