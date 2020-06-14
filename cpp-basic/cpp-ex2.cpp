#include<iostream>
using namespace std;


// Largest element in the array


/*

int main()
{
int arr[20]={12,3,5,0,34,45,23,20};
int maxi=arr[0];
int i=1;
int len=sizeof(arr)/sizeof(int);

while(i<len)
{

     if(maxi<arr[i])
      maxi=arr[i];
     i++;

}

cout<<"Largest element in the array: "<<maxi;

return 0;




return 0;
}

*/


// smallest element in the array


/*

int main()
{
int arr[20]={12,3,5,0,34,45,23,20};
int small=arr[0];
int i=1;
int len=sizeof(arr)/sizeof(int);

while(i<len)
{

     if(small>arr[i])
      small=arr[i];
     i++;

}

cout<<"smallest element in the array: "<<small;

return 0;




return 0;
}
*/


//sort an array element in ascending order

/*
int main()
{

     int arr[20]={12,4,8,2,6,3};
     for( int i =0;i < arr[i] !='\0'; i++)
     {

          for(int j=i;arr[j]!='\0';j++)
          {

               if(arr[i]>arr[j])
               {

                    swap(arr[i],arr[j]);
               }
          }
     }

     for(int k=0;arr[k]!='\0';k++)
          cout<<arr[k]<<" ";
     return 0;
}


*/

// arrange in the descending   order
/*
int main()
{

     int arr[20]={12,4,8,2,6,3};
     for( int i =0;i < arr[i] !='\0'; i++)
     {

          for(int j=i;arr[j]!='\0';j++)
          {

               if(arr[i]<arr[j])
               {

                    swap(arr[i],arr[j]);
               }
          }
     }

     for(int k=0;arr[k]!='\0';k++)
          cout<<arr[k]<<" ";
     return 0;
}

*/

// Addition of two matrix
/*
int main()
{

          int x[3][3],y[3][3],z[3][3];
          int i,j;
          for(i=0;i<3;i++)
          {

               for(j=0;j<3;j++)
               {

                    cin>>x[i][j];

               }
          }


           for(i=0;i<3;i++)
          {

               for(j=0;j<3;j++)
               {

                    cin>>y[i][j];

               }
          }


           for(i=0;i<3;i++)
          {

               for(j=0;j<3;j++)
               {

                    z[i][j]=x[i][j]+y[i][j];

               }
          }


           for(i=0;i<3;i++)
          {

               for(j=0;j<3;j++)
               {

                    cout<<z[i][j]<<" ";

               }
               cout<<endl;
          }


       return 0;



}
*/


// sum of diagonal matrix;
/*
int main()
{

     int x[3][3];
     for(int i=0;i<3;i++)
     {

          for(int j=0;j<3;j++)
          {

               cin>>x[i][j];
          }
     }
     int sum=0;
      for(int i=0;i<3;i++)
          {

               for(int j=0;j<3;j++)
               {

                    if(i==j)
                         sum=sum+x[i][j];

               }
          }

          cout<<sum<<endl;
          return 0;

}


*/


// search an element in the array
/*
int main()
{

     int arr[30];
     int num;

     for(int i=0;i<5;i++)
     cin>>arr[i];

     cin>>num;

     for(int j=0;j<5; j++)
     {
          if(num==arr[j])
          {
               cout<<"element found at index: "<<j+1<<" which is "<<arr[j];
               break;
          }
     }

     return 0;
}
*/

// Sum of array element
/*
int main()
{

     int arr[20]={2,35,7,8,9,12,34,56};
     int len=sizeof(arr)/sizeof(arr[0]);
     int sum=0;
     int i=0;

     while(i<len)
     {

          sum=sum+arr[i];
          i++;
     }
     cout<<"sum is : "<<sum<<endl;
     return 0;
}


*/


// Reverse a array element

/*
int main()
{

     int arr[10]={1,2,3,4,5,6,7,8,9,10};

     int n=sizeof(arr)/sizeof(arr[0]);

     cout<<n<<endl;
     for(int i=n-1,j=0;j<i;i--,j++)
     {

          swap(arr[i],arr[j]);
     }

     for(int x=0;x<n;x++)
          cout<<arr[x]<<" ";

     return 0;
}


*/


// Merge in array
/*
int main()
{

     int arr[5];
     int brr[10];
     for(int i=0;i<5;i++)
          cin>>arr[i];

     for(int j=0;j<5;j++)
     {
          cin>>brr[j];
     }

     for(int j=5,i=0;j<10;j++,i++)
     {
          brr[j]=arr[i];
     }

     for(int k=0;k<10;k++)
     {

          cout<<brr[k]<<" ";
     }


return 0;
}
*/
