#include<iostream>
using namespace std;


int main()
{
int n;
cin>>n;
string s;
cin>>s;
//ababa
int co=0;
for(int i=0;i<n-2;i++){
     if(s[i]==s[i+2] && s[i+1]==s[i+3])
     {
          co++;
     }


}
cout<<co<<endl;


return 0;

}
