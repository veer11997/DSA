#include<iostream>
#include<cstring>

using namespace std;

char *mystrtok(char str[],char delim){


static char *input =NULL;
if(str!=NULL)
{

     input=str;

}
if(input==NULL)
     return NULL;
char *output=new char[strlen(input)+1];
int i;
for( i=0;input[i]!='\0';i++)
{

     if(input[i]!=delim)
     {
          output[i]=input[i];
     }
     else
     {

          output[i]='\0';
          input=input+i+1;
          return output;
     }
}

output[i]='\0';
input=NULL;
     return output;


}


int main()
{

char str[]="hi i am learning c++";
char *ptr;
ptr=strtok(str," ");// store the state of string in the previous function call in the static variable
// we can pass any thing an pass it into it around which you want seperate

cout<<ptr<<endl;

while(ptr!=NULL){

ptr=strtok(NULL," "); //for the all token call it  subsequent
cout<<ptr<<endl;  //null as perameter i have to work on original string

}



return 0;
}
