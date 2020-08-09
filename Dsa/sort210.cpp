#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution
{
public:
     void sortcolors(vector<int> &nums)
     {
          int lo=0;
          int hi=nums.size()-1;
          int mid=0;

          while(mid<=hi)
          {


               switch(nums[mid])
               {
               case 0:
                    swap(nums[mid++],nums[lo++]);
                    break;
               case 1:
                    mid++;
                    break;
               case 2:
                    swap(nums[mid],nums[hi--]);
                    break;
               }
          }
     }
};
int main()
{

     Solution s;
     vector<int> nums={0,1,1,0,1,2,1,2,0,0,0,1};
     s.sortcolors(nums);

      for(int x : nums)
          cout<<x<<" ";

}




/*
int main()
{
     // Dutch national flag

     // O(N) time complexity  O(1) space complexity
     // 0 --> (0......low-1)
     //a[high+1.....n]--->2
     //low......mid-1---->1
      int a[]={0,1,1,0,1,2,1,2,0,0,0,1};
      int n=sizeof(a)/sizeof(int);
      int low=0,mid=0,high=n-1;

      while(mid<=high)
      {
           if(a[mid]==0){
               swap(a[low],a[mid]);
               low++;
               mid++;
           }
           else if(a[mid]==1)
               mid++;
           else{
             swap(a[mid],a[high]);
               high--;
           }

      }

      for(int x : a)
          cout<<x<<" ";
      return 0;
}


*/

/*
int main()
{
     // total complexity will be O(N) +O(N)==> O(2N)
     // count sort algorithm
     int a[]={0,1,1,0,1,2,1,2,0,0,0,1};
     int n=sizeof(a)/sizeof(int);
     int s0=0,s1=0,s2=0;
     for(int i=0;i<n;i++)
     {
          //O(N)
               if(a[i]==0)
                    s0++;
               else if(a[i]==1)
                    s1++;
               else
                    s2++;
     }
     for(int i=0;i<n;i++)
     {
         // O(N)
          if(s0>0)
          {
               a[i]=0;
               s0--;
          }
          else
          {
               if(s1>0)
               {
                  a[i]=1;
                  s1--;

               }
               else
               {
                    a[i]=2;
                    s2--;
               }
          }

     }
     for(int x : a)
          cout<<x<<" ";

}
*/


/*

int main()
{
     // time complexity O(log(N) space complexity O(1)
     vector<int> v={2,0,2,1,1,1,2,2,0,0,0,1};
     sort(v.begin(),v.end());
     for(int x : v)
          cout<<x<<" ";


     return 0;

}

*/
