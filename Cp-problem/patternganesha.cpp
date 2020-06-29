#include<iostream>

using namespace std;


int main()
{


int n;
cin>>n;


cout<<"*";
for(int i=1;i<=(n-3)/2;i++){
     cout<<" ";
}
for(int i=1;i<=(n+1)/2;i++){
          cout<<"*";
}
cout<<endl;




for(int i=1;i<=(n-3)/2;i++)
{
cout<<"*";

for(int j=1;j<=(n-3)/2;j++){
cout<<" ";
}
cout<<"*"<<endl;

}




for(int i=1;i<=n;i++)
  cout<<"*";

  cout<<endl;




for(int r=1;r<=(n-3)/2;r++)
{

for(int i=1;i<=(n-3)/2+1;i++)
     cout<<" ";

cout<<"*";

for(int i=1;i<(n-3)/2;i++){
cout<<" ";
}
cout<<"*"<<endl;
}





for(int i=1;i<=(n+1)/2;i++)
     cout<<"*";
for(int i=1;i<=(n-3)/2;i++)
cout<<" ";

cout<<"*"<<endl;


return 0;
}
