#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;


//1=> odd and even problem
/*
int main()
{
    int x;
    cin>>x;
    if(x%2==0)
        cout<<"Even";
    else
        cout<<"Odd";

return 0;
}


*/

// swap  number problem
/*
int  main()
{

     int a,b;
     cin>>a>>b;
     int temp;
     temp=a;
     a=b;
     b=temp;
     cout<<a<<" "<<b;
     return 0;
}
*/


//swap without any extra variable
/*
int main()
{

     int a,b;
     cin>>a>>b;
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<a<<" "<<b;
     return 0;

}
*/


//prime number
/*
int main()
{

     int n;
     int flag=0;
     cin>>n;
     for(int i=2;i*i<=n;i++)
     {
          if(n%i==0)
          {

               flag=1;
               break;

          }
     }
     if(flag==1)
          cout<<"not prime number";
     else
          cout<<"prime number";
     return 0;

}

*/

/*
int main()
{

     int n;
     int flag=0;
     cin>>n;
     for(int i=2;i<=n/2;i++)
     {
          if(n%i==0)
          {

               flag=1;
               break;

          }
     }
     if(flag==1)
          cout<<"not prime number";
     else
          cout<<"prime number";
     return 0;

}

*/

//Factorial of number
/*
int main()
{

     int x;
     int fact=1;
     cin>>x;
     while(x>0)
     {
          fact=fact*x;
          x--;

     }

     cout<<"factorial is : "<<fact;
     return 0;



     return 0;
}


*/
/*
int fact(int x)
{

     if(x==1)
      return 1;
     return (x*fact(x-1));
}

int main()
{
     int x;
     cin>>x;
     int ans=fact(x);
     cout<<ans;
     return 0;
}


*/

//Table of number
/*
int main()
{

     int x,i=1;
     cin>>x;
     while(i<=10)
     {

          cout<<x*i<<endl;
          i++;
     }

     return 0;
}

*/


/*
int main()
{
     int x;
     cin>>x;
     int rem=0;
     while(x>0)
     {
          rem=x%10;
          x=x/10;
          cout<<rem;

     }


     return 0;
}


*/


// Number of digits

/*
int main()
{

     int x;
     cin>>x;
     int count=0;
     if(x>0)
     {
          while(x>0)
          {

               int rem=x%10;
               x=x/10;
               count++;
          }
          cout<<"Digits are: "<<count;
     }
     else
     {
          x=-x;

          while(x>0)
          {

               int rem=x%10;
               x=x/10;
               count++;
          }
          cout<<"Digits are: "<<count;
     }

     return 0;
}

*/


//Fibonacci series
/*
int main()
{
     int x,first=0,sec=1;
     int ans=0;
     int iteration=0;
     cin>>x;
     while(iteration<x)
     {
          cout<<first<<endl;
          ans=first+sec;
          first=sec;
          sec=ans;
          iteration++;

     }
     return 0;
}

*/


//  Armstrong number

/*
int main()
{
     int num,rem=0,x=0;
     int arms;
     cin>>num;
     arms=num;
     while(num>0)
     {
          rem=num%10;
          x=x+(rem*rem*rem);
          num=num/10;

     }
     if(arms==x)
          cout<<"number is armstrong";
     else
          cout<<"number is not armstrong";
     return 0;


     return 0;
}


*/

//find the greatest number
/*

int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     if(a>=b && a>=c)
          cout<<"greater is "<<a;
     else if(b>=c && b>=a)
          cout<<"greater is "<<b;
     else
          cout<<"greater is "<<c;
     return 0;

     }


     */


//palindrome number
/*
int  main()
{
     int num;
     cin>>num;
     int prev=num;
     int temp=0;
     while(num>0)
     {

          int rem=num%10;
          num=num/10;
          temp=temp*10+rem;
     }
     if(temp==prev)
          cout<<"palindrome number";
     else
          cout<<"not a palindrome number:";
     return 0;

}

*/


// palindrome string
/*
int main()
{

    char s[10];
    cin>>s;
    int i,j,n=strlen(s);
    int flag=0;

    for(i=0,j=n-1; i<=j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=1;
            break;
        }


    }

    if(flag==1)
        cout<<"not palindrome";
    else
        cout<<"palindrome";



    return 0;
}


*/




// HCF or GCD of two number
/*
int main()
{

     int a,b;
     cin>>a>>b;

     while(a>0 && b>0)
     {

          if(a>b)
               a=a-b;
          else
               b=b-a;
     }

     if(a>0)
          cout<<a;
     else
          cout<<b;
     return 0;
}


*/


// square root of number

/*
int gen(int cur)
{
     int ans=0;
     int x=1;
 while(cur>=ans)
 {

      ans=x*x;

      if(ans==cur)
          return x;

          x++;
 }

 return 0;



}


int main()
{

     int num;
     cin>>num;


    int ans=pow(num,0.5);
    cout<<ans<<endl;

    int rem= sqrt(num);
    cout<<rem<<endl;

    int cur=gen(num);
    cout<<cur<<endl;

     return 0;
}

*/


//cube root of number
/*

int main()
{

     int x;
     cin>>x;


     int ans=pow(x,0.3);

     ans++;

     cout<<ans<<endl;

     int cur=cbrt(x);

     cout<<cur<<endl;

     int rem=pow(x,0.1/0.3);

     cout<<rem;

return 0;
}

*/
//Ascii value of number
/*

int main()
{

     int x;
     cin>>x;


     cout<<toascii(x);
     cout<<endl;

     return 0;

}
*/

//  Sum of digmit number

/*

int main()
{

     int num,sum=0;
     cin>>num;

     while(num>0)
     {

          int rem=num%10;
          num=num/10;
          sum=sum+rem;
     }

     cout<<" sum of digit : "<<sum;
     return 0;



}
*/

//power of number

/*
int main()
{

     int power=1,num,p;
     cin>>num;
     cin>>p;

     while(p>0)
     {

          power=power*num;
          p--;
     }

     cout<<power;
cout<<endl;

     return 0;


}


*/


//BuzzFizz problem

/*
int main()
{

     int x;
     cin>>x;

     if(x%3==0 && x%5==0)
     {

          cout<<"FizzBuzz";

     }
     else if(x%3==0)
     {

          cout<<"Fizz";
     }
     else if(x%5==0)
     {

          cout<<"Buzz";
     }

     return 0;
}


*/

//  conversion of number like decimal to binary

/*
int main()
{

     int num,i=0,j,rem[10];

     cin>>num;

     while(num>0)
     {

          rem[i]=num%2;
          i++;
          num=num/2;

     }
     for(j=i-1;j>=0;j--)
     {

          cout<<rem[j];
     }

     return 0;
}


*/


//  factors of number
/*
int main()
{

     int num;
     cin>>num;
     for(int i=1;i<num;i++)
     {

          if(num%i==0)
               cout<<i<<" ";
     }

     return 0;
}


*/



// FInd NCR and NPR
/*
int fact(int n)
{

     int f=1;
     while(n>0)
     {

          f=f*n;
          n--;
     }

     return f;
}
int main()
{

     int n,r;
     cin>>n>>r;

     int npr=fact(n)/fact(n-r);

     int ncr=npr/fact(r);

     cout<<ncr<<" "<<npr<<endl;

     return 0;
}

*/


// change upper into lower

/*
int main()
{

     char ch;
     cin>>ch;


     ch=ch+32;
     cout<<ch;



     return 0;
}

*/




//SUm of natural number
/*
int main()
{


     int x;
     cin>>x;

     int sum=(x*(x+1))/2;
     cout<<sum<<endl;
     return 0;
}

*/

//
