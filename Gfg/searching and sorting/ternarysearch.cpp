#include<iostream>

using namespace std;



int ternarySearch(int l, int r, int key, int ar[])
{
    while (r >= l) {

        // Find mid1 and mid2
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        // Check if key is present at any mid
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
   if (key < ar[mid1]) {

            // The key lies in between l and mid1
            r = mid1 - 1;
        }
        else if (key > ar[mid2]) {

            // The key lies in between mid2 and r
            l = mid2 + 1;
        }
        else {

            // The key lies in between mid1 and mid2
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }

    // Key not found
    return -1;
}

int main()
{

int n;
cin>>n;

int a[n];

for(int i=0;i<n;i++)
     cin>>a[i];

     int x;
     cin>>x;

     int ind=ternarySearch(0,n-1,x,a);
     cout<<ind<<" "<<a[ind];
     return 0;

}



