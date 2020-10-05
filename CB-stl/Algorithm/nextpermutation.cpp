#include<iostream>
#include<algorithm>

using namespace std;

int fact(int n)
{
     int f=1;
     while(n>0)
     {

          f=f*n;
          n--;
     }
     return f;

}




int  isChoice(vector<int> v)
{
    for(int i=0;i<v.size()-1;i++){
     int val1=v[i];
     int val2=v[i+1];
     bool res = val1& val2;
     if(res==0){
          return 0;

     }
    }
    return 1;
}


int main()
{
     int t;
     cin>>t;
     while(t>0){
          int n;
          cin>>n;
          vector<int> v;
          for(int i=0;i<n;i++)
          {
               v.push_back(i+1);
          }
          int f = fact(n);
          while(f>0){
          next_permutation(v.begin(),v.end());
          int result=isChoice(v);
         if(result==1)
         {
          for(int x : v)
             cout<<x<<" ";
             cout<<endl;
              break;
         }

         f--;
          }
          if(f==0)
               cout<<-1<<endl;
      t--;
     }

return 0;
}

