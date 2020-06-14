#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;


// length of string
/*
int main()
{


char str[20];
cin>>str;

int len=strlen(str);
cout<<"Length is : " <<len;


return 0;

}

*/


//COmpare two string
/*
int main()
{

     char arr[10];
     char brr[10];
cin>>arr;
cin>>brr;
     int test=strcmp(arr,brr);

     if(test!=0)
          cout<<"not equal";
     else
          cout<<"equal";

     return 0;
}

*/

//  reverse the string
/*
int main()

{


     char arr[20];
     cin>>arr;


     char str[20];

     for(int i=strlen(arr)-1;i>=0;i--)
     {
               cout<<arr[i];
     }

     return 0;
}
*/


// frequency of char
/*
int main()
{

     char str[20];

     char ch;
     cin>>str;

     cin>> ch;

     int co=0;
     for(int i=0;str[i]!='\0';i++)
     {
          if(str[i]==ch)
               co++;




     }

     cout<<"frequency is : "<<co;
     return 0;
}


*/


//    combine two string

/*
int main()
{

     char arr[30];
     char brr[10];
     cin>>arr;
     cin>>brr;

     strcat(arr," ");
     strcat(arr,brr);

     cout<<arr;

     return 0;

}

*/


// copy string
/*
int main()
{

     char arr[20];
     char brr[10];

     cin>>arr;
     cin>>brr;

     strcpy(arr,brr);

     cout<<arr;

     return 0;

}

*/


//count vowels from string

/*
int main()
{
     char arr[20];
     cin>>arr;
     int co=0;
     for(int i=0;arr[i]!='\0';i++)
     {
          if(arr[i]=='a' || arr[i]=='e' || arr[i]=='o' || arr[i]=='i' || arr[i]=='u')
               co++;
     }

     cout<<"total vowels  are: "<<co;
     return 0;
}

*/


// Delet vowels from string
/*
int main()
{

     char arr[30];
     cin>>arr;

     for(int i=0;arr[i]!='\0';i++)
     {

         if(arr[i]=='a' || arr[i]=='e' || arr[i]=='o' || arr[i]=='i' || arr[i]=='u')
         {
              int j=i;
            while(arr[j]!='\0')
            {

                 arr[j]=arr[j+1];
                 j++;
            }
            i--;

         }
     }

     cout<<arr;
return 0;
}


*/


//Remove space from string

/*
int main()
{

     char arr[20];
     gets(arr);
int i;
     for( i=0;arr[i]!='\0';i++)
     {

          if(arr[i]==' ')
          {
              int j=i;
            while(arr[j]!='\0')
            {

                 arr[j]=arr[j+1];
                 j++;
            }
            i--;

         }
     }

     cout<<arr;
     return 0;
}


*/

// Count the word of sentense
/*
int main()
{

     char str[30];
     gets(str);
     int co=0;
     for(int i=0;i<str[i]!='\0';i++)
     {

          if(str[i]==' ')
               co++;
     }

     cout<<"total number of word : "<<co+1;
     return 0;
}


*/


