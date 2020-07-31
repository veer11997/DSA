#include<iostream>
#include<algorithm>
#include<vector>
// assuming only one duplicate number

using namespace std;





int main()
{


     int a[]={2,5,9,6,9,3,8,9,7,1};
     int n=sizeof(a)/sizeof(int);
     int ans=0;
     vector<int> v(n,0);//frequency array
     for(int i=0;i<n;i++)
     {
          v[a[i]]++;
          if(v[a[i]]>1)
          {
               ans=a[i];
          }

     }
            cout<<ans;
return 0;

}


/*
int main()
{
     //O(NlogN) time complexity and O(1) space complexity

     int a[]={1,3,4,2,2};
     int n=sizeof(a)/sizeof(int);

     sort(a,a+n);
     for(int i=0;i<n;i++)
     {

          if(a[i]==a[i+1])
          {
               cout<<a[i];
               break;
          }

     }

return 0;
}
*/
