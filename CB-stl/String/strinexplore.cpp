 #include<iostream>
 #include<string>

 // what string class do is that it  wrap  char * array in the string object .it is like a container

 using namespace std;

 int main()
 {

     string s0;
     string s1("Hello");
     string s2="Hello world";
     string s3(s2);

     string s4=s3;
     char a[]={'a','b','c','d','\0'};
     string s5(a);
     cout<<s0<<endl;
     cout<<s1<<endl;
     cout<<s2<<endl;
     cout<<s3<<endl;
     cout<<s4<<endl;
     cout<<s5<<endl;

     cout<<s1.empty()<<endl;
     if(s0.empty())
          cout<<"s0 is a empty\n";

          // Append

          s0.append("learn cpp");
          cout<<s0<<endl;
          s0+=" and python";
          cout<<s0<<endl;


          //Remove

          cout<<s0.length()<<endl;
          s0.clear();
          cout<<s0.length()<<endl;

          //compare

          s0="Apple";
          s1="Mango";
          cout<<s1.compare(s0)<<endl;  //Return an integer ==0  equal , >0 or <0


          // operator overloaded
         if( s0<s1)
          cout<<"mango is greater then apple in case of lexi compare "<<endl;


          // Access of i

          cout<<s0[0]<<endl;

          // find substring

          string s="i want to have apple juice";
          int ind=s.find("apple");
          cout<<ind<<endl;
          string word="apple";
int length= word.length();
          // remove the word
          s.erase(ind,length+1);
          cout<<s<<endl;


          //iterate over all the character in string

          for(int i=0;i<s1.length();i++)
               cout<<s1[i]<<":";

          // using iterator
          cout<<endl;
          for(auto it =s.begin();it!=s.end();it++)
               cout<<(*it)<<",";
          cout<<endl;
// it type of string :: iterator
          // for each loop
          for(auto c : s1)
               cout<<c<<".";
          cout<<endl;




 return 0;
 }
