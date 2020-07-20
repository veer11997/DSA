#include<iostream>

using namespace std;


//(a + b) mod M = ((a mod M) + (b mod M)) mod M.
//(a - b) mod M = ((a mod M) - (b mod M)) mod M.
//(a * b) mod M = ((a mod M) * (b mod M)) mod M.
//ax=1 mod inverse x such that
//method of finding modular inverse
//Extended Euclidean Algorithm: This method can be used when a and M are co-prime.
//Fermat Little Theorem: This method can be used when M is prime.


int main()
{
// modular inverse where x such that (a*x)/m=1 fin in 0 to m-1;

int a,x,m;
cin>>a>>m;

for(int x=0;x<m-1;x++)
{
     if((a*x)%m==1)
     {
          cout<<x<<endl;
          break;
     }
}

return 0;
}
