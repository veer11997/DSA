#include<iostream>
#include<cstring>

// String tokenizer

using namespace std;

int main()
{
char str[]="hi i am coder";
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
