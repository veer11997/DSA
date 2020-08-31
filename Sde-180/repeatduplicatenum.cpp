#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getTwoElements(int arr[], int n,
					int* x, int* y)
{
	/* Will hold xor of all elements
	and numbers from 1 to n */
	int xor1;

	/* Will have only single set bit of xor1 */
	int set_bit_no;

	int i;
	*x = 0;
	*y = 0;

	xor1 = arr[0];

	/* Get the xor of all array elements */
	for (i = 1; i < n; i++)
		xor1 = xor1 ^ arr[i];

	/* XOR the previous result with numbers
	from 1 to n*/
	for (i = 1; i <= n; i++)
		xor1 = xor1 ^ i;

	/* Get the rightmost set bit in set_bit_no */
	set_bit_no = xor1 & ~(xor1 - 1);


	for (i = 0; i < n; i++) {
		if (arr[i] & set_bit_no)
			/* arr[i] belongs to first set */
			*x = *x ^ arr[i];

		else
			/* arr[i] belongs to second set*/
			*y = *y ^ arr[i];
	}
	for (i = 1; i <= n; i++) {
		if (i & set_bit_no)
			/* i belongs to first set */
			*x = *x ^ i;

		else
			/* i belongs to second set*/
			*y = *y ^ i;
	}

	/* *x and *y hold the desired
		output elements */
}


int main()
{
	int arr[] = { 1, 3, 4, 5, 5, 6, 2 };
	int* x = (int*)malloc(sizeof(int));
	int* y = (int*)malloc(sizeof(int));
	int n = sizeof(arr) / sizeof(arr[0]);

	getTwoElements(arr, n, x, y);
	cout << " The missing element is " << *x << " and the repeating"
		<< " number is " << *y;
}

/*

int main()
{
     // using Addition and subtraction solution
     int arr[]={4,3,6,2,1,1};
     int n=sizeof(arr)/sizeof(int);
     int sum=(n*(n+1))/2;
     int ssum=(n*(n+1)*(2*n+1))/6;
     for(int i=0;i<n;i++)
     {
          sum=sum-arr[i];
          ssum=ssum-arr[i]*arr[i];
     }

     // x2-y2=24
     //x-y=4
     //x+y=6
     //2x=10 x=5
     //y=1 x=5

     cout<<"missing "<<((ssum/sum)+sum)/2<<endl;
     cout<<"Repeating "<<((ssum/sum)+sum)/2-sum<<endl;





}

*/

/*
int main()
{

//o(N)+o(N)=> o(2n) time complexity
// O(N) space complexity
// modify array in it
//hashing

vector<int> v={4,3,6,2,1,1};
vector<int> fq(v.size()+1,0);

for(int i=0;i<v.size();i++)
{
     fq[v[i]]++;

}

for(int i=1;i<fq.size();i++)
{
     if(fq[i]>1)
          cout<<"Repeating "<<i<<endl;
     else if(fq[i]==0)
          cout<<"Missing "<<i<<endl;
}
return 0;
}

*/



/*
int main()
{
     // find the missing and Repeating Number

     //sorting method
     // O(NlogN)+O(N) time complexity
     //space complexity O(1)
     int arr[]={4,3,6,2,1,1};
     //1 1 2 3 4 6
     int n=sizeof(arr)/sizeof(int);
     sort(arr,arr+n);

     for(int i=0;i<n;i++)
     {
          if(arr[i]==arr[i+1])
               cout<<"repeating "<<arr[i+1]<<endl;
          else if(arr[i]!=(i+1))
          {
               cout<<i+1<<" Missing ";

          }

     }
}


*/
