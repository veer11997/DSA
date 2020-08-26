#include<iostream>

using namespace std;

// perfect square number have 2n+1 factors where other have 2n factors
int main()
{

int num;
cin>>num;
for(int i=1;i*i<=num;i++)
{

     cout<<i*i<<endl;
}

return 0;


}
