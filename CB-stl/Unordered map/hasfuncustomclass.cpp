#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

class student
{
public:

string firstname;
string lastname;
string rollno;

student(string f,string l, string no)
{


     firstname=f;
     lastname=l;
     rollno=no;
}
bool operator==(const student &s) const
{
     return rollno==s.rollno?true:false;


}

};


class Hashfun{

public:


     size_t operator()(const student &s) const
     {
                    return s.firstname.length()+s.lastname.length();
     }

};



int main()
{
unordered_map<student,int,Hashfun> student_map;
     student s1("prateek","narang","010");
     student s2("rahul","kumar","023");
     student s3("prateek","gupta","030");
     student s4("rahul","kumar","120");


     //Add student marks to hashmap

     student_map[s1]=100;
     student_map[s2]=120;
     student_map[s3]=11;
     student_map[s4]=45;


     // find the marks
     cout<<student_map[s3]<<endl;


     //iterate  over all student

     for(auto s: student_map)
     {


          cout<<s.first.firstname<<" "<<s.first.rollno<<" "<<s.second<<endl;
     }


}
