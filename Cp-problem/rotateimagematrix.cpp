#include<iostream>
#include<algorithm>
using namespace std;


void display(int a[][100],int n)
{
     for(int i=0;i<n;i++)
{


     for(int j=0;j<n;j++)
     {


          cout<<a[i][j]<<" ";
     }
     cout<<endl;
}

}
void rotate_stl(int a[][100],int n)
{
     // same thing using stl
     for(int i=0;i<n;i++)
     {

          reverse(a[i],a[i]+n);
     }


      for(int i=0;i<n;i++)
     {

          for(int j=0;j<n;j++)
          {
               if(i<j)
               {

                    swap(a[i][j],a[j][i]);
               }
          }
     }
}

void mrotate(int a[][100],int n)
{

     for(int i=0;i<n;i++)
     {

          int start=0;
          int en=n-1;
          while(start<en)
          {

               swap(a[i][start],a[i][en]);
               start++;
               en--;
          }
     }

     for(int i=0;i<n;i++)
     {

          for(int j=0;j<n;j++)
          {
               if(i<j)
               {

                    swap(a[i][j],a[j][i]);
               }
          }
     }
}

int main()
{
// By reversing each row  then transpose

int a[100][100];
int n;
cin>>n;
for(int i=0;i<n;i++)
{


     for(int j=0;j<n;j++)
     {


          cin>>a[i][j];
     }
}
mrotate(a,n);
//rotate_stl(a,n);
display(a,n);


return 0;
}
